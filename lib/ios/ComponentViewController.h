
@protocol ComponentViewController <UINavigationControllerDelegate>

//TODO: This is not an initializer, rename plz
//TODO: Pass navigation options & handle them
+ (instancetype)initWithContainerId:(NSString *)containerId andProps:(NSDictionary *)props;

@end

