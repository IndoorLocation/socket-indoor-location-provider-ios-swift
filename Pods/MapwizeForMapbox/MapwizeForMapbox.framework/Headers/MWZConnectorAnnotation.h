@import Mapbox;

@interface MWZConnectorAnnotation : MGLPointAnnotation

@property (nonatomic,strong) NSString* type;
@property (nonatomic,strong) NSNumber* floor;
@property (nonatomic,assign) BOOL isUp;
@property (nonatomic,assign) BOOL isTo;

- (instancetype) initWithType:(NSString*) type floor:(NSNumber*) floor isUp:(BOOL) isUp isTo:(BOOL) isTo;

@end
