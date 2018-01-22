#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MWZIconImage : NSObject

@property (nonatomic, strong, readonly) UIImage* image;
@property (nonatomic, strong, readonly) NSString* name;

- (instancetype) initWithImage:(UIImage*) image name:(NSString*) name;

@end
