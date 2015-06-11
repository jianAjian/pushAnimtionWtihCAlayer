//
//  NavgationDelegate.h
//  花样页面切换🌻
//
//  Created by hlj on 15/6/11.
//  Copyright (c) 2015年 HLJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NavgationDelegate : NSObject<UINavigationControllerDelegate>
{
    
}

@property (nonatomic,strong) UIPercentDrivenInteractiveTransition * interactionController;

@property (nonatomic,weak) UINavigationController  * navigationController;


//
//func navigationController(navigationController: UINavigationController,
//                          interactionControllerForAnimationController animationController: UIViewControllerAnimatedTransitioning) -> UIViewControllerInteractiveTransitioning? {
//    return self.interactionController
//}

@end
