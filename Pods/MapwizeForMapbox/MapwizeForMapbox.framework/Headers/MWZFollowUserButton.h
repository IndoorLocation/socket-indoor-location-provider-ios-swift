#import <UIKit/UIKit.h>
#import "MWZFollowUserModeEnum.h"
#import "MWZFollowUserModeDelegate.h"

@interface MWZFollowUserButton : UIButton

@property (nonatomic, strong) id<MWZFollowUserModeDelegate> delegate;

- (void) setMode:(FollowUserMode) mode;

@end
