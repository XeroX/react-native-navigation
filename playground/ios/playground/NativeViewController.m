//
//  NativeViewController.m
//  playground
//
//  Created by xerox on 12/30/17.
//  Copyright © 2017 Wix. All rights reserved.
//

#import "NativeViewController.h"
#import "ReactNativeNavigation/ReactNativeNavigation.h"

@interface NativeViewController ()

@property (nonatomic, weak) IBOutlet UILabel *titleLabel;

@property (nonatomic, copy) NSString *containerId;
@property (nonatomic, copy) NSDictionary *props;

@end

@implementation NativeViewController

+ (instancetype)initWithContainerId:(NSString *)containerId andProps:(NSDictionary *)props {
	NativeViewController *instance = [[self alloc] initWithNibName:@"NativeViewController" bundle:nil];
	instance.containerId = containerId;
	instance.props = props;

	return instance;
}

- (void)viewDidLoad {
	[super viewDidLoad];
	
	self.titleLabel.text = self.props[@"title"];
}

- (IBAction)fockinfock:(id)sender {
	[ReactNativeNavigation push:self.containerId layout:@{@"name": @"navigation.playground.PushedScreen"} onTopOf:self];
}

@end
