#import <Foundation/Foundation.h>
#import "MWZVenue.h"
#import "MWZPlace.h"
#import "MWZLatLngFloor.h"
#import "MWZRoute.h"
#import "MWZConnectorPlace.h"
#import <IndoorLocation/IndoorLocation.h>

@interface MWZGeojsonDataFactory : NSObject

+ (NSData*) generateVenueSourceData:(NSArray<MWZVenue*>*) venues currentVenue:(MWZVenue*) currentVenue activeLanguage:(NSString*) activeLanguage;
+ (NSData*) generateSourceDataWithPlaces:(NSArray<MWZPlace*>*) places connectors:(NSArray<MWZConnectorPlace*>*) connectors activeLanguage:(NSString*) activeLanguage;
+ (NSData*) generatePlacePolygonSourceData:(NSArray<MWZPlace*>*) places;

+ (NSData*) generateDirectionPolylineSourceData:(NSArray<MWZRoute*>*) routes;

+ (NSData*) generateGeoJSONPointData:(ILIndoorLocation*) location;

@end
