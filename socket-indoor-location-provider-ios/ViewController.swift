import UIKit
import MapwizeUI

class ViewController: UIViewController {

    var provider:ILSocketLocationProvider!
    var mapwizeView: MWZUIView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let opts = MWZUIOptions()
        let settings = MWZUISettings()
        mapwizeView = MWZUIView(frame: self.view.frame, mapwizeOptions: opts, uiSettings: settings)
        mapwizeView.translatesAutoresizingMaskIntoConstraints = false
        mapwizeView?.delegate = self
        self.view.addSubview(mapwizeView!)
        
        NSLayoutConstraint.init(item: mapwizeView, attribute: .top, relatedBy: .equal, toItem: self.view, attribute: .top, multiplier: 1.0, constant: 0.0).isActive = true
        NSLayoutConstraint.init(item: mapwizeView, attribute: .bottom, relatedBy: .equal, toItem: self.view, attribute: .bottom, multiplier: 1.0, constant: 0.0).isActive = true
        NSLayoutConstraint.init(item: mapwizeView, attribute: .right, relatedBy: .equal, toItem: self.view, attribute: .right, multiplier: 1.0, constant: 0.0).isActive = true
        NSLayoutConstraint.init(item: mapwizeView, attribute: .left, relatedBy: .equal, toItem: self.view, attribute: .left, multiplier: 1.0, constant: 0.0).isActive = true
        
    }

}

extension ViewController: MWZUIViewDelegate {
    
    func mapwizeViewDidLoad(_ mapwizeView: MWZUIView) {
        self.mapwizeView = mapwizeView
        provider = ILSocketLocationProvider(url:URL(string:"YOUR_SERVER_URL"))
        provider.start()
        self.mapwizeView.setIndoorLocationProvider(provider)
    }
    
}
