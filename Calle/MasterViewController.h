//
//  MasterViewController.h
//  Calle
//
//  Created by MacBookPro on 18.2.2013.
//  Copyright (c) 2013 MacBookPro. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
