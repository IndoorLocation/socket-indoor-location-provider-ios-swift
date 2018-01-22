#ifndef MWZFollowUserModeDelegate_h
#define MWZFollowUserModeDelegate_h

#import "MWZFollowUserModeEnum.h"

@protocol MWZFollowUserModeDelegate <NSObject>

@optional

- (void) didFollowUserModeChange;

@end

#endif
