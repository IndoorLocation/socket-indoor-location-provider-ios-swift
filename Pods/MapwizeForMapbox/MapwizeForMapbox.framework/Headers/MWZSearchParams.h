#import <Foundation/Foundation.h>

@interface MWZSearchParams : NSObject

@property (nonatomic, strong) NSString* query;
@property (nonatomic, strong) NSString* venueId;
@property (nonatomic, strong) NSString* organizationId;
@property (nonatomic, strong) NSString* universeId;
@property (nonatomic, strong) NSArray<NSString*>* objectClass;

- (NSDictionary*) toDictionary;

@end
