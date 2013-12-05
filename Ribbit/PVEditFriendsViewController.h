//
//  PVEditFriendsViewController.h
//  Ribbit
//
//  Created by Vidya Pissaye on 12/2/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface PVEditFriendsViewController : UITableViewController
@property (nonatomic, strong) NSArray *allUsers;
@property (nonatomic, strong) PFUser *currentUser;
@property (nonatomic, strong) NSMutableArray *friends;

- (BOOL) isFriend:(PFUser *) user;
@end
