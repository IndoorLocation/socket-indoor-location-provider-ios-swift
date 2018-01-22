#import <Foundation/Foundation.h>
#import <IndoorLocation/IndoorLocation.h>
#import "MWZVenue.h"
#import "MWZPlace.h"
#import "MWZLatLngFloor.h"
#import "MWZObject.h"
#import "MWZDirectionPoint.h"
#import "MWZDirection.h"

@import Mapbox;

@interface MWZParsedUrlObject : NSObject

@property (nonatomic, strong) MWZVenue* venue;
@property (nonatomic, strong) NSString* accessKey;
@property (nonatomic, strong) ILIndoorLocation* indoorLocation;
@property (nonatomic, strong) NSNumber* floor;
@property (nonatomic, strong) NSNumber* zoom;
@property (nonatomic, strong) NSString* type;
@property (nonatomic, strong) NSString* language;
@property (nonatomic, assign) MGLCoordinateBounds bounds;//
@property (nonatomic, strong) MWZPlace* place;//
@property (nonatomic, strong) id<MWZDirectionPoint> from;
@property (nonatomic, strong) id<MWZDirectionPoint> to;
@property (nonatomic, strong) MWZDirection* direction;
@property (nonatomic, strong) NSNumber* isAccessible;
@property (nonatomic, strong) MWZUniverse* universe;

@end
