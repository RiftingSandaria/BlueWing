//
//  ModelController.h
//  BlueWing
//
//  Created by Adish Betawar on 5/12/15.
//  Copyright (c) 2015 Mega Saga Industries. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

