//
//  CenterViewController.h
//  OfficeBuddy
//
//  Created by dudw on 16/6/26.
//  Copyright © 2016年 dudw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuItem.h"
#import "MenuButton.h"

@interface CenterViewController : UIViewController

@property(nonatomic,strong) MenuItem *menuItem;

@property(nonatomic,strong) MenuButton *menuButton;
@end
