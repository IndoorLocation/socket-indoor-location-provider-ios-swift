#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <IndoorLocation/IndoorLocation.h>
#import "MWZLocationEngineDelegate.h"

@interface MWZLocationEngine : NSObject <ILIndoorLocationProviderDelegate, CLLocationManagerDelegate>

@property (nonatomic,strong) CLLocationManager* locationManager;
@property (nonatomic,strong) id<MWZLocationEngineDelegate> delegate;

- (instancetype) initWithIndoorLocationProvider:(ILIndoorLocationProvider*) indoorLocationProvider;

- (ILIndoorLocation*) getLocation;

- (void) start;

- (void) stop;

@end
