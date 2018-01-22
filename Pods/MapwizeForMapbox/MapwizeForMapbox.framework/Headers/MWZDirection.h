#import <Foundation/Foundation.h>
@import Mapbox;

@class MWZDirectionWrapper;
@class MWZRoute;

@interface MWZDirection : NSObject

@property(nonatomic, strong, readonly) MWZDirectionWrapper* from;
@property(nonatomic, strong, readonly) MWZDirectionWrapper* to;
@property(nonatomic, assign, readonly) double distance;
@property(nonatomic, strong, readonly) NSArray<MWZRoute*>* routes;
@property(nonatomic, assign, readonly) double traveltime;
@property(nonatomic, assign, readonly) MGLCoordinateBounds bounds;
@property(nonatomic, strong, readonly) NSArray<MWZDirectionWrapper*>* waypoints;
@property(nonatomic, strong, readonly) NSArray<MWZDirection*>* subdirections;

- (instancetype) initWithFrom:(MWZDirectionWrapper*) from to:(MWZDirectionWrapper*) to distance:(double) distance routes:(NSArray<MWZRoute*>*) routes
                   traveltime:(double) traveltime bounds:(MGLCoordinateBounds) bounds waypoints:(NSArray<MWZDirectionWrapper*>*) waypoints subdirections:(NSArray<MWZDirection*>*) subdirections;

@end
