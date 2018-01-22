#import <Foundation/Foundation.h>

@import Mapbox;

#import "MWZLatLngFloor.h"
#import "MWZTranslation.h"
#import "MWZObject.h"

@class MWZUniverse;

@interface MWZVenue : NSObject <MWZObject>

@property(nonatomic, strong, readonly) NSString* identifier;
@property(nonatomic, strong, readonly) NSString* name;
@property(nonatomic, strong, readonly) NSString* alias;
@property(nonatomic, strong, readonly) NSString* defaultLanguage;
@property(nonatomic, assign, readonly) MGLCoordinateBounds bounds;
@property(nonatomic, strong, readonly) NSArray<NSString*>* supportedLanguages;
@property(nonatomic, strong, readonly) NSString* icon;
@property(nonatomic, strong, readonly) MWZLatLngFloor* marker;
@property(nonatomic, strong, readonly) NSDictionary* geometry;
@property(nonatomic, strong) NSArray<MWZUniverse*>* universes;
@property(nonatomic, strong, readonly) NSArray<MWZTranslation*>* translations;
@property(nonatomic, assign, readonly) BOOL isPublished;
@property(nonatomic, assign, readonly) BOOL areQrcodesDeployed;
@property(nonatomic, assign, readonly) BOOL areIbeaconsDeployed;
@property(nonatomic, strong, readonly) NSDate* updated;

- (instancetype)initWithIdentifier:(NSString*) identifer name:(NSString*) name alias:(NSString*) alias
                              icon:(NSString*) icon marker:(MWZLatLngFloor*) marker defaultLanguage:(NSString*) defaultLanguage supportedLanguages:(NSArray<NSString*>*) supportedLanguages geometry:(NSDictionary*) geometry universes:(NSArray<MWZUniverse*>*) universes translations:(NSArray<MWZTranslation*>*) translations isPublished:(BOOL) isPublished areQrcodesDeployed:(BOOL) areQrcodesDeployed areIbeaconsDeployed:(BOOL) areIbeaconsDeployed updated:(NSDate*) updated bounds:(MGLCoordinateBounds) bounds;

- (MWZUniverse*) defaultUniverse;
- (NSString*) defaultLanguage;

- (NSString*) titleForLanguage:(NSString*) language;

@end
