#import <Foundation/Foundation.h>

@interface MWZDirectionWrapper : NSObject

@property(nonatomic, strong) NSNumber* latitude;
@property(nonatomic, strong) NSNumber* longitude;
@property(nonatomic, strong) NSNumber* floor;
@property(nonatomic, strong) NSString* placeId;
@property(nonatomic, strong) NSString* venueId;
@property(nonatomic, strong) NSString* placeListId;

- (instancetype) init;

- (instancetype) initWithLatitude:(NSNumber*) latitude longitude:(NSNumber*) longitude floor:(NSNumber*) floor placeId:(NSString*) placeId venueId:(NSString*) venueId placeListId:(NSString*) placeListId;

- (NSDictionary*) toDictionary;

@end
