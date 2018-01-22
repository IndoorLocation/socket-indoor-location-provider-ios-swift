#import <Foundation/Foundation.h>

@interface MWZApiFilter : NSObject

@property (nonatomic, retain) NSString* venueId;
@property (nonatomic, retain) NSString* universeId;
@property (nonatomic, retain) NSNumber* isVisible;
@property (nonatomic, retain) NSString* organizationId;
@property (nonatomic, retain) NSString* alias;
@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSNumber* latitudeMin;
@property (nonatomic, retain) NSNumber* latitudeMax;
@property (nonatomic, retain) NSNumber* longitudeMin;
@property (nonatomic, retain) NSNumber* longitudeMax;

- (NSMutableDictionary*) toDictionary;

@end
