//
//  FinishedViewController.h
//  PayTabs
//
//  Created by Hitaishin Technologies on 6/21/14.
//  Copyright (c) 2014 Hitaishin Infotech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PayTabFinishedViewController : UIViewController
/* This Property For Done Button */
@property(nonatomic, retain) IBOutlet UIButton *doneButton;
/* This Property For Transaction Finish Label */
@property(nonatomic, retain) IBOutlet UILabel *finishedLabel;
@property(nonatomic, retain) IBOutlet UILabel *titleMerchant;
@property(nonatomic, retain) IBOutlet UIImageView *imageMerchant;
@property(nonatomic, retain) NSString  *titleMerchantString;
@property(nonatomic, retain) NSString  *logoMerchantString;
@property(nonatomic, retain) NSString  *transactionID;
@property(nonatomic, retain) NSString  *secretKey;
@property (retain, nonatomic) IBOutlet UILabel *transactionSucceed;
@property (retain, nonatomic) IBOutlet UILabel *paymentComplete;
@property (retain, nonatomic) IBOutlet UILabel *successfully;

/* This Method For Done Button Action */
-(IBAction)done:(id)sender;
@end
