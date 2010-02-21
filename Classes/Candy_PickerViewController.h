//
//  Candy_PickerViewController.h
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright Thomas Belote 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Candy.h"

@interface Candy_PickerViewController : UIViewController {
	
	IBOutlet UISwitch *dark;
	IBOutlet UISwitch *milk;
	IBOutlet UISwitch *white;
	IBOutlet UISwitch *nuts;
	IBOutlet UISwitch *sugar;
	IBOutlet UISwitch *sugarfree;
	IBOutlet UISwitch *peanuts;
	IBOutlet UISwitch *kosher;
	IBOutlet UITextView *results;
	IBOutlet UIButton *reload;
	IBOutlet UIScrollView *scrollView;
	NSMutableArray *candyChoices;
	NSManagedObjectContext *managedObjectContext;
	
}
@property (nonatomic, retain) UISwitch *dark;
@property (nonatomic, retain) UISwitch *milk;
@property (nonatomic, retain) UISwitch *white;
@property (nonatomic, retain) UISwitch *nuts;
@property (nonatomic, retain) UISwitch *sugar;
@property (nonatomic, retain) UISwitch *sugarfree;
@property (nonatomic, retain) UISwitch *peanuts;
@property (nonatomic, retain) UISwitch *kosher;
@property (nonatomic, retain) UITextView *results;
@property (nonatomic, retain) UIButton *reload;
@property (nonatomic, retain) NSMutableArray *candyChoices;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (IBAction) pressedButtonReload: (id) sender;

@end

