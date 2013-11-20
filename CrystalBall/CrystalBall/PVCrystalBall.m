//
//  PVCrystalBall.m
//  CrystalBall
//
//  Created by Vidya Pissaye on 11/19/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import "PVCrystalBall.h"

@implementation PVCrystalBall

- (NSArray*) predictions {
    if(_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"It is Certain",
                        @"It is Decidedly so",
                        @"All signs say YES",
                        @"The stars are not aligned",
                        @"My reply is no", @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again",
                        @"Unable to answer now", nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
