#import <Foundation/Foundation.h>

@interface ReactNativeNavigation : NSObject

@property (class, nonatomic, strong, readonly) NSDictionary *nativeScreens;

+(void)bootstrap:(NSURL*)jsCodeLocation launchOptions:(NSDictionary *)launchOptions;
+(void)registerNativeScreens:(NSDictionary *)nativeScreens;

@end
