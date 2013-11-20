//
//  PVCrystalBall.h
//  CrystalBall
//
//  Created by Vidya Pissaye on 11/19/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PVCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end
