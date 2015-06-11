//
//  CircleTransitionAnimator.h
//  花样页面切换🌻
//
//  Created by hlj on 15/6/11.
//  Copyright (c) 2015年 HLJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CircleTransitionAnimator : NSObject<UIViewControllerAnimatedTransitioning>

@property (nonatomic,weak) id<UIViewControllerContextTransitioning>   transitionContext ;

@end
