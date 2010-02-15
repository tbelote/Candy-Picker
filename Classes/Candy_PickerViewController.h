//
//  Candy_PickerViewController.h
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright KinKast, Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

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
	NSMutableArray *candyChoices;
	
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
@property (readwrite, assign) NSMutableArray *candyChoices;

- (IBAction) pressedButtonReload: (id) sender;

@end

