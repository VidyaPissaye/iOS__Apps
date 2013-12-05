//
//  PVLoginViewController.h
//  Ribbit
//
//  Created by Vidya Pissaye on 12/2/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PVLoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;


- (IBAction)login:(id)sender;

@end
