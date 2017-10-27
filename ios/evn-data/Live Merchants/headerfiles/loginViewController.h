//
//  loginViewController.h
//  PayTab
//
//  Created by Mustafeez on 11/6/14.
//  Copyright (c) 2014 Hitaishin Infotech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface loginViewController : UIViewController


@property (retain, nonatomic) IBOutlet UITextField *email;
@property (retain, nonatomic) IBOutlet UITextField *password;
- (IBAction)submitBtnPressed:(id)sender ;
@end
