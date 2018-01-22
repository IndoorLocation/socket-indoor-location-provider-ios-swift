#import <Foundation/Foundation.h>

#import "MWZObject.h"
#import "MWZVenue.h"
#import "MWZPlace.h"
#import "MWZPlaceList.h"
#import "MWZLayer.h"
#import "MWZUniverse.h"
#import "MWZTranslation.h"
#import "MWZLatLngFloor.h"
#import "MWZDirection.h"
#import "MWZDirectionWrapper.h"
#import "MWZRoute.h"
#import "MWZConnectorPlace.h"
#import "MWZParsedUrlObject.h"
#import "MWZStyleClass.h"
#import "MWZStyleSheet.h"

@interface MWZApiResponseParser : NSObject

+ (MWZVenue*) parseVenue:(NSDictionary*) dictionary;
+ (NSArray<MWZVenue*>*) parseVenues:(NSArray*) array;

+ (MWZPlace*) parsePlace:(NSDictionary*) dictionary;
+ (NSArray<MWZPlace*>*) parsePlaces:(NSArray*) array;
+ (NSArray<MWZConnectorPlace*>*) parseConnectorPlaces:(NSArray*) array;
+ (MWZConnectorPlace*) parseConnectorPlace:(NSDictionary*) dictionary;

+ (MWZLayer*) parseLayer:(NSDictionary*) dictionary;
+ (NSArray<MWZLayer*>*) parseLayers:(NSArray*) array;
+ (MWZStyleSheet*) parseStyleSheet:(NSDictionary*) dictionary;

+ (MWZLatLng*) parseLatLng:(NSDictionary*) dictionary;

+ (NSArray<MWZUniverse*>*) parseUniversesIds:(NSArray*) array;
+ (NSArray<MWZUniverse*>*) parseUniverses:(NSArray*) array;
+ (MWZUniverse*) parseUniverse:(NSDictionary*) dictionary;

+ (NSArray<MWZTranslation*>*) parseTranslations:(NSArray*) array;
+ (MWZTranslation*) parseTranslation:(NSDictionary*) dictionary;

+ (MWZDirection*) parseDirection:(NSDictionary*) dictionary;

+ (NSArray<MWZPlaceList*>*) parsePlaceLists:(NSArray*) array;
+ (MWZPlaceList*) parsePlaceList:(NSDictionary*) dictionary;

+ (NSArray<id<MWZObject>>*) parseSearchResponse:(NSDictionary*) dictionary;

+ (MWZParsedUrlObject*) parseUrlObject:(NSDictionary*) dictionary;


+ (NSArray<id<MWZObject>>*) parseMainSearchResponse:(NSArray*) array;

@end

