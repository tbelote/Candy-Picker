//
//  Candy_PickerViewController.m
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright KinKast, Inc. 2010. All rights reserved.
//

#import "Candy_PickerViewController.h"

@implementation Candy_PickerViewController

@synthesize dark;
@synthesize milk;
@synthesize white;
@synthesize nuts;
@synthesize sugar;
@synthesize sugarfree;
@synthesize peanuts;
@synthesize kosher;
@synthesize results;
@synthesize reload;
@synthesize candyChoices;

- (IBAction) pressedButtonReload: (id) sender {
	results.text = @"Do stuff";
}


// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        // Custom initialization
		//Candy *milkChocolateButter = [Candy ]
		self.candyChoices = [NSMutableArray arrayWithCapacity: 200];
		
		[self.candyChoices addObject: @"bob"];
    }
    return self;
}

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/


/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/


/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
