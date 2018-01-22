#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "MWZGeojsonDataFactory.h"
#import "MWZMapwizePluginDelegate.h"
#import "MWZFloorControllerDelegate.h"
#import "MWZMapwizeAnnotation.h"
#import "MWZDirection.h"
#import "MWZLocationEngine.h"
#import "MWZLocationLayer.h"
#import "MWZConnectorAnnotationDelegate.h"
#import "MWZFollowUserButton.h"
#import "MWZPlaceList.h"
#import "MWZOptions.h"
#import <IndoorLocation/IndoorLocation.h>
@import Mapbox;

@interface MapwizePlugin : NSObject <MGLMapViewDelegate, UIGestureRecognizerDelegate, MWZFloorControllerDelegate, CLLocationManagerDelegate, MWZFollowUserModeDelegate, UIGestureRecognizerDelegate, MWZLocationEngineDelegate, MWZConnectorAnnotationDelegate>

@property (nonatomic, strong) id<MGLMapViewDelegate> mapboxDelegate;
@property (nonatomic, strong) id<MWZMapwizePluginDelegate> delegate;
@property (nonatomic, strong) MWZFollowUserButton* followButton;

@property (nonatomic, strong) UIView* bottomLayoutView;
@property (nonatomic, strong) UIView* topLayoutView;
@property (nonatomic, strong) UIImageView* compassView;

@property (nonatomic, strong, readonly) ILIndoorLocation* userLocation;
@property (nonatomic, strong, readonly) NSNumber* userHeading;
@property (nonatomic, assign) FollowUserMode followUserMode;

- (instancetype) initWith:(MGLMapView*) mglMapView options:(MWZOptions*) options;

- (void) refreshWithCompletionHandler:(void (^)(void)) handler;

- (MWZVenue*) getVenue;

- (void) setFloor:(NSNumber*) floor;
- (void) setFloor:(NSNumber*) floor forVenue:(MWZVenue*) venue;
- (NSNumber*) getFloor;
- (NSArray<NSNumber*>*) getFloors;

- (void) centerOnVenue:(MWZVenue*) venue forceEntering:(BOOL) force;
- (void) centerOnPlace:(MWZPlace*) place;
- (void) centerOnUser;

- (void) setPreferredLanguage:(NSString*) language;
- (NSString*) getPreferredLanguage;
- (void) setLanguage:(NSString*) language;
- (void) setLanguage:(NSString*) language forVenue:(MWZVenue*) venue;
- (NSString*) getLanguageForVenue:(MWZVenue*) venue;


- (void) setUniverse:(MWZUniverse*) universe;
- (void) setUniverse:(MWZUniverse*) universe forVenue:(MWZVenue*) venue;
- (MWZUniverse*) getUniverseForVenue:(MWZVenue*) venue;
- (MWZUniverse*) getUniverse;

- (NSArray<MWZPlace*>*) getPromotedPlacesForVenue:(MWZVenue*) venue;
- (void) setPromotedPlaces:(NSArray<MWZPlace*>*) places forVenue:(MWZVenue*) venue;
- (void) addPromotedPlace:(MWZPlace*) place;
- (void) addPromotedPlaces:(NSArray<MWZPlace*>*) places;
- (void) removePromotedPlace:(MWZPlace*) place;
- (void) removePromotedPlaces:(NSArray<MWZPlace*>*) places;

- (void) setStyle:(MWZStyle*) style forPlace:(MWZPlace*) place;

- (void) setDirection:(MWZDirection*) direction;



- (void) setIndoorLocationProvider:(ILIndoorLocationProvider*) locationProvider;

- (MWZMapwizeAnnotation*) addMarker:(MWZLatLngFloor*) latLngFloor;
- (MWZMapwizeAnnotation*) addMarker:(MWZLatLngFloor*) latLngFloor image:(UIImage*) image;
- (MWZMapwizeAnnotation*) addMarkerOnPlace:(MWZPlace*) place;
- (MWZMapwizeAnnotation*) addMarkerOnPlace:(MWZPlace*) place image:(UIImage*) image;
- (NSArray<MWZMapwizeAnnotation*>*) addMarkersOnPlaceList:(MWZPlaceList*) placeList;
- (NSArray<MWZMapwizeAnnotation*>*) addMarkersOnPlaceList:(MWZPlaceList*) placeList image:(UIImage*) image;
- (void) removeMarker:(MWZMapwizeAnnotation*) marker;
- (void) removeMarkers;

- (void) setBottomPadding:(CGFloat) bottomPadding;
- (void) setTopPadding:(CGFloat) topPadding;
- (void) setBottomPadding:(CGFloat) bottomPadding animationDuration:(CGFloat) duration;
- (void) setTopPadding:(CGFloat) topPadding animationDuration:(CGFloat) duration;

@end
