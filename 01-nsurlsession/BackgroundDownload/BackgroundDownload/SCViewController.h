//
//  SCViewController.h
//  BackgroundDownload
//
//  Created by Sam Davies on 04/07/2013.
//  Copyright (c) 2013 ShinobiControls. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)startDownload:(id)sender;

@end
