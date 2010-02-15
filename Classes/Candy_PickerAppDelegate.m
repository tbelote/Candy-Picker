//
//  Candy_PickerAppDelegate.m
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright KinKast, Inc. 2010. All rights reserved.
//

#import "Candy_PickerAppDelegate.h"
#import "Candy_PickerViewController.h"

@implementation Candy_PickerAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
