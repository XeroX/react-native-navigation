//
//  NativeViewController.m
//  playground
//
//  Created by nvzn on 5/6/18.
//  Copyright © 2018 Wix. All rights reserved.
//

#import "NativeViewController.h"

@interface NativeViewController ()

@end

@implementation NativeViewController

- (instancetype)init {
	self = [super init];
	
	self.view.backgroundColor = UIColor.redColor;
	
	return self;
}

//TODO: Should be required or inherited somehow
- (BOOL)isCustomTransitioned {
	return NO;
}

@end
