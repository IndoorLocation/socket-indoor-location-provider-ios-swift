import UIKit
import MapwizeForMapbox

class ViewController: UIViewController {

    var mapwizePlugin:MapwizePlugin!
    @IBOutlet weak var mapView: MGLMapView!
    var provider:ILSocketLocationProvider!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.mapwizePlugin = MapwizePlugin.init(self.mapView, options: MWZOptions())
        self.mapwizePlugin.delegate = self
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

extension ViewController: MWZMapwizePluginDelegate {
    func mapwizePluginDidLoad(_ mapwizePlugin: MapwizePlugin!) {
        provider = ILSocketLocationProvider(url:URL(string:"YOUR_SERVER_URL"))
        self.mapwizePlugin.setIndoorLocationProvider(provider)
    }
}
