//
//  tpDetailViewController.h
//  TuPocoCookingApp
//
//  Created by Kaveh Noorbakhsh on 5/17/14.
//  Copyright (c) 2014 Kaveh Noorbakhsh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tpDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
