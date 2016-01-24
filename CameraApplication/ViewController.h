//
//  ViewController.h
//  CameraApplication
//
//  Created by Ash Ryan Arnwine on 1/24/16.
//  Copyright © 2016 Ash Ryan Beats. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    
    UIImagePickerController *picker;
    UIImage *image;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)takePhoto:(id)sender;
- (IBAction)choosePhoto:(id)sender;

@end

