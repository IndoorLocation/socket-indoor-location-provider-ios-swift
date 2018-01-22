#import "MWZLatLng.h"
#import "MWZDirectionPoint.h"
#import "MWZDirectionWrapper.h"

@interface MWZLatLngFloor : MWZLatLng <MWZDirectionPoint>

@property (nonatomic, strong, readonly) NSNumber* floor;

- (instancetype) initWithLatitude:(double)latitude longitude:(double)longitude floor:(NSNumber*) floor;

@end
