//
//  ViewController.h
//  CamCapture
//
//  Created by Willson Ayotte on 7/17/13.
//  Copyright (c) 2013 Willson Ayotte. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    //outlet for image on main view
    IBOutlet UIImageView *photoImageView;
}
//actions for features
-(IBAction)capture:(id)sender;
-(IBAction)photoView:(id)sender;
-(IBAction)videoRecord:(id)sender;
@end
