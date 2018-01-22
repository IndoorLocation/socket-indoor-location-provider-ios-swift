#import <Foundation/Foundation.h>
#import "MWZDirectionPoint.h"
#import "MWZDirectionWrapper.h"
#import "MWZTranslation.h"
#import "MWZStyle.h"
#import "MWZObject.h"
#import "MWZLatLngFloor.h"
@import Mapbox;

@class MWZUniverse;

@interface MWZPlace : NSObject <MWZDirectionPoint, MWZObject>

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* venueId;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSString* alias;
@property(nonatomic, strong, readonly) NSString* icon;

@property(nonatomic, strong, readonly) MWZLatLngFloor* marker;
@property(nonatomic, strong, readonly) MWZLatLngFloor* entrance;
@property(nonatomic, strong, readonly) NSDictionary* geometry;

@property(nonatomic, strong, readonly) NSString* fillColor;
@property(nonatomic, strong, readonly) NSString* strokeColor;
@property(nonatomic, strong, readonly) NSNumber* fillOpacity;
@property(nonatomic, strong, readonly) NSNumber* strokeOpacity;
@property(nonatomic, strong, readonly) NSNumber* strokeWidth;

@property(nonatomic, strong, readonly) NSNumber* order;
@property(nonatomic, strong, readonly) NSNumber* floor;

@property(nonatomic, strong, readonly) NSString* placeTypeId;

@property(nonatomic, assign, readonly) BOOL isPublished;
@property(nonatomic, assign, readonly) BOOL isSearchable;
@property(nonatomic, assign, readonly) BOOL isVisible;
@property(nonatomic, assign, readonly) BOOL isClickable;
@property(nonatomic, assign, readonly) BOOL isMarkerDisplay;

@property(nonatomic, strong, readonly) NSArray<MWZUniverse*>* universes;
@property(nonatomic, strong, readonly) NSArray<MWZTranslation*>* translations;
@property(nonatomic, strong) MWZStyle* customStyle;

- (instancetype)initWithIdentifier:(NSString*) identifer venueId:(NSString*) venueId name:(NSString*) name alias:(NSString*) alias
                              icon:(NSString*) icon marker:(MWZLatLngFloor*) marker entrance:(MWZLatLngFloor*) entrance geometry:(NSDictionary*) geometry
                         fillColor:(NSString*) fillColor strokeColor:(NSString*) strokeColor fillOpacity:(NSNumber*) fillOpacity strokeOpacity:(NSNumber*) strokeOpacity
                       strokeWidth:(NSNumber*) strokeWidth order:(NSNumber*) order floor:(NSNumber*) floor placeTypeId:(NSString*) placeTypeId isPublished:(BOOL) isPublished
                      isSearchable:(BOOL) isSearchable isVisible:(BOOL) isVisible isClickable:(BOOL) isClickable isMarkerDisplay:(BOOL) isMarkerDisplay
                         universes:(NSArray<MWZUniverse*>*) universes translations:(NSArray<MWZTranslation*>*) translations;

- (NSString*) titleForLanguage:(NSString*) language;
- (NSString*) subtitleForLanguage:(NSString*) language;

- (BOOL) getMarkerDisplay;
- (NSString*) getFillColor;
- (NSString*) getFillOpacity;
- (NSString*) getStrokeColor;
- (NSNumber*) getStrokeOpacity;
- (NSString*) getMarkerUrl;

- (MGLCoordinateBounds) bounds;

@end
