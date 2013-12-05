//
//  PVSignupViewController.h
//  Ribbit
//
//  Created by Vidya Pissaye on 12/2/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PVSignupViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (IBAction)signup:(id)sender;
- (IBAction)dismiss:(id)sender;

@end
