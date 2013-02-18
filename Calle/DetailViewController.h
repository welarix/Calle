//
//  DetailViewController.h
//  Calle
//
//  Created by MacBookPro on 18.2.2013.
//  Copyright (c) 2013 MacBookPro. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
