//
//  PhotoCaptureViewController.h
//  CamCapture
//
//  Created by Willson Ayotte on 7/17/13.
//  Copyright (c) 2013 Willson Ayotte. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface PhotoCaptureViewController : UIViewController <UIAlertViewDelegate>
{
    
    //variables to pass images into
    IBOutlet UIImageView *ogImage;
    IBOutlet UIImageView *scaleImage;
    
    //dictionary to hold data from main view
    NSDictionary *photoData;
    
    
    
    //images
    UIImage *originalPicture;
    UIImage *scaledPicture;
    
}

-(IBAction)onClick:(id)sender;

//property
@property (nonatomic,strong )NSDictionary *photoData;
@end
