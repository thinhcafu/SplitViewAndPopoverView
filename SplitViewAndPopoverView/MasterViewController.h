//
//  MasterViewController.h
//  SplitViewAndPopoverView
//
//  Created by ECEP2010 on 9/22/15.
//  Copyright (c) 2015 ECEP. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (nonatomic, retain) NSArray *siteNames;
@property (nonatomic, retain) NSArray *siteAddresses;

@end

