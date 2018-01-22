#import <Mapbox/Mapbox.h>

#import "MWZConnectorAnnotationDelegate.h"

@interface MWZConnectorAnnotationView : MGLAnnotationView <UIGestureRecognizerDelegate>

@property (nonatomic, strong) id<MWZConnectorAnnotationDelegate> delegate;
@property (nonatomic, strong) NSString* imageName;
@property (nonatomic, strong) NSString* imageArrowName;
@property (nonatomic, strong) NSNumber* floor;
@property (nonatomic, assign) BOOL isTo;


- (instancetype) initWithType:(NSString*) type isUp:(BOOL) isUp toFloor:(NSNumber*) floor isTo:(BOOL) toGo;

@end
