//
//  PVImageViewController.m
//  Ribbit
//
//  Created by Vidya Pissaye on 12/3/13.
//  Copyright (c) 2013 Vidya Pissaye. All rights reserved.
//

#import "PVImageViewController.h"

@interface PVImageViewController ()

@end

@implementation PVImageViewController


- (void)viewDidLoad
{
    [super viewDidLoad];

    PFFile *imageFile = [self.message objectForKey:@"file"];
    NSURL *imageFileUrl = [[NSURL alloc] initWithString:imageFile.url];
    NSData *imageData = [NSData dataWithContentsOfURL:imageFileUrl];
    self.imageView.image = [UIImage imageWithData:imageData];

    NSString *senderName = [self.message objectForKey:@"senderName"];
    NSString *title = [NSString stringWithFormat:@"Sent from %@", senderName];
    self.navigationItem.title = title;
}

- (void) viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    if([self respondsToSelector:@selector(timeout)]) {
        // Perform after the defined time duration
        [NSTimer scheduledTimerWithTimeInterval:10 target:self selector:@selector(timeout) userInfo:Nil repeats:NO];
    }
    else {
        NSLog(@"Error: Selector missing!");
    }
}

#pragma mark - Helper methods
- (void) timeout {
    [self.navigationController popViewControllerAnimated:YES];
}

@end
