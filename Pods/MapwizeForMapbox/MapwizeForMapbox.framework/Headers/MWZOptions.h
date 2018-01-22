#import <Foundation/Foundation.h>

@interface MWZOptions : NSObject

@property (nonatomic, retain) NSNumber* floor;
@property (nonatomic, retain) NSString* language;
@property (nonatomic, assign) BOOL showUserPositionControl;
@property (nonatomic, assign) BOOL showFloorControl;

@end
