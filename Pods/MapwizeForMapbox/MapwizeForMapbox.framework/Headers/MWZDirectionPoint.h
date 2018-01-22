#ifndef DirectionPoint_h
#define DirectionPoint_h

@class MWZDirectionWrapper;

@protocol MWZDirectionPoint <NSObject>

- (MWZDirectionWrapper*) toDirectionWrapper;

@end
#endif
