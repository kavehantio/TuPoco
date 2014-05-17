//
//  tpMasterViewController.h
//  TuPocoCookingApp
//
//  Created by Kaveh Noorbakhsh on 5/17/14.
//  Copyright (c) 2014 Kaveh Noorbakhsh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class tpDetailViewController;

#import <CoreData/CoreData.h>

@interface tpMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>


@property (strong, nonatomic) tpDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
