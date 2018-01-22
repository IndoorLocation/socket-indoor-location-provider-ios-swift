#import <Foundation/Foundation.h>

@interface MWZUniverse : NSObject

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* name;

- (instancetype)initWithIdentifier:(NSString*) identifier name:(NSString*) name;

@end
