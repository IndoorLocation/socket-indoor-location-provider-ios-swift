Pod::Spec.new do |s|
  s.name         = "SocketIndoorLocationProvider"
  s.version      = "1.0.0"
  s.license      = { :type => 'MIT' }
  s.summary      = "Allows to use a socket to provide indoorlocation"
  s.homepage     = "https://github.com/IndoorLocation/socket-indoor-location-provider-ios-swift.git"
  s.author       = { "Indoor Location" => "indoorlocation@mapwize.io" }
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.source       = { :git => "https://github.com/IndoorLocation/socket-indoor-location-provider-ios-swift.git", :tag => "#{s.version}" }
  s.source_files  = "socket-indoor-location-provider-ios/Provider/*.swift"
  s.dependency "IndoorLocation", "~> 1.0"
  s.dependency "Socket.IO-Client-Swift", "~> 13.1.0"
end
