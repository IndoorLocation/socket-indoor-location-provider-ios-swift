#ifndef MWZConnectorAnnotationDelegate_h
#define MWZConnectorAnnotationDelegate_h

@class MWZConnectorAnnotationView;

@protocol MWZConnectorAnnotationDelegate <NSObject>

@optional

- (void) connectorDidClick:(MWZConnectorAnnotationView*) annotationView;

@end

#endif
