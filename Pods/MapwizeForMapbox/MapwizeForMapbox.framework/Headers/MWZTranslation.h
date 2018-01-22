#import <Foundation/Foundation.h>

@interface MWZTranslation : NSObject

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* title;
@property(nonatomic, strong, readonly) NSString* subtitle;
@property(nonatomic, strong, readonly) NSString* details;
@property(nonatomic, strong, readonly) NSString* language;

- (instancetype) initWithIdentifer:(NSString*) identifer title:(NSString*) title subtitle:(NSString*) subtitle details:(NSString*) details language:(NSString*) language;

@end
