#import <Foundation/Foundation.h>

@interface MWZStyle : NSObject

@property(nonatomic, strong) NSString* markerUrl;
@property(nonatomic, strong) NSString* fillColor;
@property(nonatomic, strong) NSString* strokeColor;
@property(nonatomic, strong) NSNumber* fillOpacity;
@property(nonatomic, strong) NSNumber* strokeOpacity;
@property(nonatomic, strong) NSNumber* strokeWidth;
@property(nonatomic, assign) BOOL isMarkerDisplay;

- (instancetype) initWithMarkerUrl:(NSString*) markerUrl fillColor:(NSString*) fillColor strokeColor:(NSString*) strokeColor fillOpacity:(NSNumber*) fillOpacity
                     strokeOpacity:(NSNumber*) strokeOpacity strokeWidth:(NSNumber*) strokeWidth isMarkerDisplay:(BOOL) isMarkerDisplay;

@end
