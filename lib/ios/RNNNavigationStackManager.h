#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RNNStore.h"

@interface RNNNavigationStackManager : NSObject

@property (nonatomic, strong) UIViewController* fromVC;
@property (nonatomic, strong) RNNRootViewController* toVC;
@property (nonatomic) int loadCount;
-(instancetype)initWithStore:(RNNStore*)store;


-(void)push:(UIViewController*)newTop onTop:(NSString*)containerId completion:(RNNTransitionCompletionBlock)completion;
-(void)pop:(NSString*)containerId withAnimationData:(NSDictionary*)animationData;
-(void)popTo:(NSString*)containerId;
-(void)popToRoot:(NSString*)containerId;

- (void)pushNativeController:(UIViewController *)newTop onTop:(NSString*)containerId completion:(RNNTransitionCompletionBlock)completion;

@end
