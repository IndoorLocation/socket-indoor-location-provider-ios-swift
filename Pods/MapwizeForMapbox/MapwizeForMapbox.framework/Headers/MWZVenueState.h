#import <Foundation/Foundation.h>

#import "MWZVenue.h"
#import "MWZUniverse.h"
#import "MWZLayer.h"
#import "MWZPlace.h"
#import "MWZConnectorPlace.h"
@interface MWZVenueState : NSObject

@property (nonatomic, strong) MWZVenue* venue;

@property (nonatomic, strong) NSMutableDictionary<NSString*,NSArray<MWZLayer*>*>* layersByUniverseId;
@property (nonatomic, strong) NSMutableDictionary<NSString*,NSArray<MWZPlace*>*>* placesByUniverseId;
@property (nonatomic, strong) NSMutableDictionary<NSString*,NSArray<NSNumber*>*>* floorsByUniverseId;

@property (nonatomic, strong) NSMutableArray<MWZUniverse*>* loadedUniverses;
@property (nonatomic, strong) NSMutableArray<MWZPlace*>* allPlaces;
@property (nonatomic, strong) NSMutableDictionary<NSString*,MWZPlace*>* placesById;
@property (nonatomic, strong) NSMutableDictionary<NSNumber*,MGLShape*>* mglShapePlacesByFloor;
@property (nonatomic, strong) NSMutableDictionary<NSNumber*,MGLShape*>* mglShapePolygonPlacesByFloor;

@property (nonatomic, strong) NSString* activeLanguage;
@property (nonatomic, strong) NSNumber* activeFloor;

@property (nonatomic, strong) MWZUniverse* activeUniverse;

@property (nonatomic, strong) NSMutableArray<MWZPlace*>* promotedPlace;
@property (nonatomic, strong) NSMutableArray<MWZConnectorPlace*>* connectorPlaces;

- (instancetype) initWithVenue:(MWZVenue*) venue;

- (void) addDataForUniverse:(MWZUniverse*) universe places:(NSArray<MWZPlace*>*) places layers:(NSArray<MWZLayer*>*) layers connectorPlaces:(NSArray<MWZConnectorPlace*>*) connectorPlaces;

- (NSNumber*) activeFloor;
- (NSArray<NSNumber*>*) activeFloors;
- (BOOL) isFloorValid:(NSNumber*) floor;
- (BOOL) isUniverseValid:(MWZUniverse*) universe;
- (BOOL) isPlaceLoaded:(MWZPlace*) place;

- (NSArray<MWZLayer*>*) activeLayers;
- (NSArray<MWZLayer*>*) floorNullLayers;
- (NSArray<MWZPlace*>*) activePlaces;
- (NSArray<MWZConnectorPlace*>*) activeConnectorPlaces;

- (void) addPlace:(MWZPlace*) place;
- (void) addPromotePlace:(MWZPlace*) place;
- (void) removePromotedPlace:(MWZPlace*) place;

- (void) resetMemory;
- (MGLShape*) mglShapeMemory;
- (MGLShape*) mglPolygonShapeMemory;

- (NSNumber*) defaultFloor;

@end
