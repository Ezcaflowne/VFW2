//
//  VideoCaptureViewController.h
//  CamCapture
//
//  Created by Willson Ayotte on 7/17/13.
//  Copyright (c) 2013 Willson Ayotte. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoCaptureViewController : UIViewController
{
    //variables to hold data
    IBOutlet UITextView *videoText;
    NSDictionary *videoData;
    BOOL Save;
}
-(IBAction)onClick:(id)sender;
@property (nonatomic,strong)NSDictionary *videoData;
@end
