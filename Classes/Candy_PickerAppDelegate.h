//
//  Candy_PickerAppDelegate.h
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright Thomas Belote 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class Candy_PickerViewController;

@interface Candy_PickerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Candy_PickerViewController *viewController;
	NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Candy_PickerViewController *viewController;

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, readonly) NSString *applicationDocumentsDirectory;


@end

