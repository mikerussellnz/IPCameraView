//
//  ViewController.h
//  webcam
//
//  Created by Mike Russell on 16/04/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    int frameCounter;
    NSMutableData *buffer1;
    NSMutableData *buffer2; 
    NSMutableData *currentData;
    UIImage *currentFrame;
}


@property (retain, nonatomic) IBOutlet UIImageView *imageView;

@end
