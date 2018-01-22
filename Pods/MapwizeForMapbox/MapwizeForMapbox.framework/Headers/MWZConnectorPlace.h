#import <Foundation/Foundation.h>

@class MWZLatLngFloor;

@interface MWZConnectorPlace : NSObject

@property (nonatomic,strong) NSString* identifier;
@property (nonatomic,strong) NSString* venueId;
@property (nonatomic,strong) MWZLatLngFloor* coordinates;
@property (nonatomic,strong) NSNumber* floor;
@property (nonatomic,strong) NSString* icon;
@property (nonatomic,strong) NSString* type;

- (instancetype) initWithIdentifier:(NSString*) identifier venueId:(NSString*) venueId coordinates:(MWZLatLngFloor*) coordinates floor:(NSNumber*) floor icon:(NSString*) icon type:(NSString*) type;

@end
