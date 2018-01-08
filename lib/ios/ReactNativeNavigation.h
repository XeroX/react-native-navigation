
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ComponentViewController;

@interface ReactNativeNavigation : NSObject

+(void)bootstrap:(NSURL*)jsCodeLocation launchOptions:(NSDictionary *)launchOptions;
+(void)bootstrap:(NSURL*)jsCodeLocation launchOptions:(NSDictionary *)launchOptions nativeScreens:(NSDictionary *)nativeScreens;

//TODO: This should be moved into some `storage`
+(NSDictionary<NSString *, Class<ComponentViewController>> *)nativeScreens;

@end
