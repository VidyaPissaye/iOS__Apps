//
//  PVFriendsViewController.h
//  Ribbit
//
//  Created by Vidya Pissaye on 12/3/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface PVFriendsViewController : UITableViewController
@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;
@end
