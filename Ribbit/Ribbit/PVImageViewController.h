//
//  PVImageViewController.h
//  Ribbit
//
//  Created by Vidya Pissaye on 12/3/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface PVImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
