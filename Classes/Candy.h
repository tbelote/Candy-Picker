//
//  Candy.h
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright 2010 KinKast, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Candy : NSManagedObject {
	NSString *name;
	BOOL dark;
	BOOL milk;
	BOOL white;
	BOOL nuts;
	BOOL sugar;
	BOOL sugarfree;
	BOOL peanuts;
	BOOL kosher;
	BOOL favorite;
}

@property (readwrite,assign) NSString *name;
@property (readwrite,assign) BOOL dark;
@property (readwrite,assign) BOOL milk;
@property (readwrite,assign) BOOL white;
@property (readwrite,assign) BOOL nuts;
@property (readwrite,assign) BOOL sugar;
@property (readwrite,assign) BOOL sugarfree;
@property (readwrite,assign) BOOL peanuts;
@property (readwrite,assign) BOOL kosher;
@property (readwrite,assign) BOOL favorite;


@end
