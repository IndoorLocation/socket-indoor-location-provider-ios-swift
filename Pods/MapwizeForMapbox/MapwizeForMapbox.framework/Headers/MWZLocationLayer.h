#import <Foundation/Foundation.h>

#import "MWZLatLngFloor.h"
#import "MWZLocationEngine.h"
#import "MWZLocationEngineDelegate.h"

@import Mapbox;

@interface MWZLocationLayer : NSObject <MWZLocationEngineDelegate>

@property (nonatomic,strong) MGLMapView* mglMapView;

- (instancetype) initWithMapView:(MGLMapView*) mapView;

- (void) setLocation:(ILIndoorLocation*) location;

- (void) setHeading:(double) heading;

- (void) setOnFloor:(BOOL) onFloor;

@end
