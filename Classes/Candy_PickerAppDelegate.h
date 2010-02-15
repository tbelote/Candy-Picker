//
//  Candy_PickerAppDelegate.h
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright KinKast, Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Candy_PickerViewController;

@interface Candy_PickerAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Candy_PickerViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Candy_PickerViewController *viewController;

@end

