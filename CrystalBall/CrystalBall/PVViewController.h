//
//  PVViewController.h
//  CrystalBall
//
//  Created by Vidya Pissaye on 11/15/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PVCrystalBall;

@interface PVViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) PVCrystalBall *crystalBall;

- (void) makePrediction;


@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;


@end
