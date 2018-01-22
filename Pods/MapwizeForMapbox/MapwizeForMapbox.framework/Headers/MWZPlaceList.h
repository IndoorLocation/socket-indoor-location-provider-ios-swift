#import <Foundation/Foundation.h>
#import "MWZDirectionPoint.h"
#import "MWZDirectionWrapper.h"
#import "MWZObject.h"

@class MWZTranslation;

@interface MWZPlaceList : NSObject <MWZDirectionPoint, MWZObject>

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSString* alias;
@property(nonatomic, strong, readonly) NSString* venueId;
@property(nonatomic, strong, readonly) NSArray<NSString*>* placeIds;
@property(nonatomic, strong, readonly) NSString* icon;
@property(nonatomic, strong, readonly) NSArray<MWZTranslation*>* translations;
@property(nonatomic, assign, readonly) BOOL isPublished;
@property(nonatomic, assign, readonly) BOOL isSearchable;

- (instancetype) initWithIdentifier:(NSString*) identifier name:(NSString*) name alias:(NSString*) alias venueId:(NSString*) venueId placeIds:(NSArray<NSString*>*) placeIds
                               icon:(NSString*) icon translations:(NSArray<MWZTranslation*>*) translations isPublished:(BOOL) isPublished isSearchable:(BOOL) isSearchable;
                                                                                                                                               

@end
