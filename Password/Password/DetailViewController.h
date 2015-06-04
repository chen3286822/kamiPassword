//
//  DetailViewController.h
//  Password
//
//  Created by 陈飞飞 on 15-6-4.
//  Copyright (c) 2015年 陈飞飞. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
