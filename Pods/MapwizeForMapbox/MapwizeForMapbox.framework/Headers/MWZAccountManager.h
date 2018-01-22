#import <Foundation/Foundation.h>

@interface MWZAccountManager : NSObject

@property (nonatomic, retain) NSString* apiKey;

+ (instancetype) sharedInstance;

@end
