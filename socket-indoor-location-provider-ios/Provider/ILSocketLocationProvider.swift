import Foundation
import IndoorLocation
import SocketIO

class ILSocketLocationProvider : ILIndoorLocationProvider {
    
    let url:URL!
    var isConnected = false
    var manager:SocketManager!
    var socket:SocketIOClient!
    
    init(url:URL!) {
        self.url = url
        super.init()

        let address = self.getIPAddress()
        
        if address != nil {
            manager = SocketManager(socketURL: self.url, config: [.connectParams(["userId" : address!])])
            socket = manager.defaultSocket
            
            socket.on(clientEvent: .connect) {data, ack in
                print("socket connected")
                self.isConnected = true
                self.dispatchDidStart()
            }
            
            socket.on("indoorLocationChange") {data, ack in
                if let responseArray = data as? [Dictionary<String, Any>] {
                    let responseDictionary = responseArray[0]
                    if let indoorLocationDictionary = responseDictionary["indoorLocation"] as? Dictionary<String,NSNumber> {
                        let indoorLocation = ILIndoorLocation.init()
                        indoorLocation.providerName = "socket"
                        indoorLocation.latitude = indoorLocationDictionary["latitude"] as! Double
                        indoorLocation.longitude = indoorLocationDictionary["longitude"] as! Double
                        indoorLocation.floor = indoorLocationDictionary["floor"] as NSNumber?
                        indoorLocation.accuracy = indoorLocationDictionary["accuracy"] as! Double
                        self.dispatchDidUpdate(indoorLocation)
                    }
                    
                }
            }
            
            socket.on(clientEvent: .error) {data, ack in
                print(data[0])
                let message = data[0] as! String
                self.dispatchDidFailWithError(NSError(domain:message, code:502, userInfo:nil))
            }
        }
        
        else {
            self.dispatchDidFailWithError(NSError(domain:"No IP", code: 502, userInfo:nil))
        }
    }
    
    override func start() {
        socket.connect()
    }
    
    override func stop() {
        socket.disconnect()
    }
    
    override func isStarted() -> Bool {
        if socket.status == SocketIOStatus.connected {
            return true
        }
        return false
    }
    
    override func supportsFloor() -> Bool {
        return true
    }
    
    func getIPAddress() -> String? {
        var address: String?
        var ifaddr: UnsafeMutablePointer<ifaddrs>? = nil
        if getifaddrs(&ifaddr) == 0 {
            var ptr = ifaddr
            while ptr != nil {
                defer { ptr = ptr?.pointee.ifa_next }
                
                let interface = ptr?.pointee
                let addrFamily = interface?.ifa_addr.pointee.sa_family
                if addrFamily == UInt8(AF_INET) || addrFamily == UInt8(AF_INET6) {

                    if let name: String = String(cString: (interface?.ifa_name)!), name == "en0" {
                        var hostname = [CChar](repeating: 0, count: Int(NI_MAXHOST))
                        getnameinfo(interface?.ifa_addr, socklen_t((interface?.ifa_addr.pointee.sa_len)!), &hostname, socklen_t(hostname.count), nil, socklen_t(0), NI_NUMERICHOST)
                        address = String(cString: hostname)
                    }
                }
            }
            freeifaddrs(ifaddr)
        }
        return address
    }

    
}
