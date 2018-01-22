#import <Foundation/Foundation.h>

#import "MWZStyleClass.h"

@interface MWZStyleSheet : NSObject

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSArray<MWZStyleClass*>* styleClasses;

- (instancetype) initWithIdentifier:(NSString*) identifier name:(NSString*) name styleClasses:(NSArray<MWZStyleClass*>*) styleClasses;

@end
