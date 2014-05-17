//
//  tpAppDelegate.h
//  TuPocoCookingApp
//
//  Created by Kaveh Noorbakhsh on 5/17/14.
//  Copyright (c) 2014 Kaveh Noorbakhsh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tpAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
