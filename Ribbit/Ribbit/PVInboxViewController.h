//
//  PVInboxViewController.h
//  Ribbit
//
//  Created by Vidya Pissaye on 12/2/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>

@interface PVInboxViewController : UITableViewController

@property (nonatomic, strong) NSArray *messages;
@property (nonatomic, strong) PFObject *selectedMessage;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;
@property (nonatomic, strong) UIRefreshControl *refreshControl;

- (IBAction)logout:(id)sender;

@end
