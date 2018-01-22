#import <Foundation/Foundation.h>

@interface MWZStyleClass : NSObject

@property(nonatomic, strong, readonly) NSString* uniqIdentifier;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSString* fillColor;
@property(nonatomic, strong, readonly) NSString* strokeColor;
@property(nonatomic, strong, readonly) NSNumber* fillOpacity;
@property(nonatomic, strong, readonly) NSNumber* strokeOpacity;
@property(nonatomic, strong, readonly) NSNumber* strokeWidth;

- (instancetype) initWithIdentifier:(NSString*) uniqIndentifier name:(NSString*) name fillColor:(NSString*) fillColor strokeColor:(NSString*) strokeColor
                        fillOpacity:(NSNumber*) fillOpacity strokeOpacity:(NSNumber*) strokeOpacity strokeWidth:(NSNumber*) strokeWidth;

@end
