#import <Foundation/Foundation.h>

@import Mapbox;

@interface MWZRoute : NSObject

@property(nonatomic, strong, readonly) NSNumber* floor;
@property(nonatomic, strong, readonly) NSNumber* fromFloor;
@property(nonatomic, strong, readonly) NSNumber* toFloor;
@property(nonatomic, assign, readonly) BOOL isStart;
@property(nonatomic, assign, readonly) BOOL isEnd;
@property(nonatomic, assign, readonly) double traveltime;
@property(nonatomic, assign, readonly) double timeToEnd;
@property(nonatomic, assign, readonly) MGLCoordinateBounds bounds;
@property(nonatomic, assign, readonly) double distance;
@property(nonatomic, strong, readonly) NSString* connectorTypeTo;
@property(nonatomic, strong, readonly) NSString* connectorTypeFrom;
@property(nonatomic, strong, readonly) NSArray<NSValue*>* path;

- (instancetype) initWithFloor:(NSNumber*) floor fromFloor:(NSNumber*) fromFloor toFloor:(NSNumber*) toFloor isStart:(BOOL) isStart isEnd:(BOOL) isEnd
                    traveltime:(double) traveltime timeToEnd:(double) timeToEnd bounds:(struct MGLCoordinateBounds) bounds distance:(double) distance
               connectorTypeTo:(NSString*) connectorTypeTo connectorTypeFrom:(NSString*) connectorTypeFrom path:(NSArray<NSValue*>*) path;


@end
