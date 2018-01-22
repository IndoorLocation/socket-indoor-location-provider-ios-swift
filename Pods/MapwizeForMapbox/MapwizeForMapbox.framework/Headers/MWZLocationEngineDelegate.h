#ifndef MWZLocationEngineDelegate_h
#define MWZLocationEngineDelegate_h

@class MWZLocationEngine;

@protocol MWZLocationEngineDelegate <NSObject>

@optional

- (void) engine:(MWZLocationEngine*) locationEngine didUpdateLocation:(ILIndoorLocation*) location;

- (void) engine:(MWZLocationEngine*) locationEngine didFailWithError:(NSError *)error;

- (void) engineDidStart:(MWZLocationEngine*) engine;

- (void) engineDidStop:(MWZLocationEngine*) engine;

- (void) engine:(MWZLocationEngine*) locationEngine didUpdateHeading:(double) heading;

@end


#endif
