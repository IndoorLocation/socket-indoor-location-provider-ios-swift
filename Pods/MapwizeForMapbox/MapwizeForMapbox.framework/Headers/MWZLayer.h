#import <Foundation/Foundation.h>

@class MWZStyleSheet;
@class MWZUniverse;

@interface MWZLayer : NSObject

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSNumber* floor;
@property(nonatomic, strong, readonly) NSNumber* order;
@property(nonatomic, strong, readonly) NSString* type;
@property(nonatomic, strong, readonly) NSString* tilesUrlTemplate;
@property(nonatomic, strong, readonly) NSString* venueId;
@property(nonatomic, strong, readonly) NSNumber* tilesMaxZoom;
@property(nonatomic, strong, readonly) NSString* features;
@property(nonatomic, strong, readonly) NSString* styleSheetId;
@property(nonatomic, assign, readonly) BOOL isPublished;
@property(nonatomic, strong, readonly) NSArray<MWZUniverse*>* universes;
@property(nonatomic, strong) MWZStyleSheet* styleSheet;

- (instancetype) initWithIdentifier:(NSString*) identifer name:(NSString*) name floor:(NSNumber*) floor order:(NSNumber*) order type:(NSString*) type tilesUrlTemplate:(NSString*) tilesUrlTemplate
                            venueId:(NSString*) venueId tilesMaxZoom:(NSNumber*) tilesMaxZoom features:(NSString*) features styleSheetId:(NSString*) styleSheetId
                        isPublished:(BOOL) isPublished universes:(NSArray<MWZUniverse*>*) univereses;

@end
