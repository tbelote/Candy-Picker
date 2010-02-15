//
//  Preferences.h
//  Candy Picker
//
//  Created by Thomas Belote on 2/14/10.
//  Copyright 2010 Thomas Belote. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Preferences :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * kosher;
@property (nonatomic, retain) NSNumber * sugar;
@property (nonatomic, retain) NSNumber * dark;
@property (nonatomic, retain) NSNumber * peanuts;
@property (nonatomic, retain) NSNumber * nuts;
@property (nonatomic, retain) NSNumber * milk;
@property (nonatomic, retain) NSNumber * sugarfree;
@property (nonatomic, retain) NSNumber * white;

@end



