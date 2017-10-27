//
//  PayTabCardReaderViewController.h
//  PayTabsLibrary
//
//  Created by Paytabs LLC on 6/16/14.
//  Copyright (c) 2014 PayTabs Co. All rights reserved.

#import <UIKit/UIKit.h>
#import "PayTabCardReaderViewController.h"
#import "PayTabsViewController.h"
#import "Constants.h"
@interface PayTabCardReaderViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *lblGeneralData;
@property(strong,nonatomic)NSString *tag_merchant_email;
@property(strong,nonatomic)NSString *tag_merchant_password;
@property(strong,nonatomic)NSString *tag_tax;
@property(strong,nonatomic)NSString *tag_discount;
@property(strong,nonatomic)NSString *tag_title;
@property(strong,nonatomic)NSString *tag_original_assignee_code;
@property(strong,nonatomic)NSString *tag_currency;
@property(strong,nonatomic)NSString *tag_amount;
@property(strong,nonatomic)NSString *secretKey;
@property(strong,nonatomic)NSString *sdklanguage;

@property(strong,nonatomic)NSString *shipping_address;
@property(strong,nonatomic)NSString *shipping_city;
@property(strong,nonatomic)NSString *shiping_country;
@property(strong,nonatomic)NSString *shipping_state;
@property(strong,nonatomic)NSString *shipping_zip_code;

@property(strong,nonatomic)NSString *billing_address;
@property(strong,nonatomic)NSString *billing_city;
@property(strong,nonatomic)NSString *billing_country;
@property(strong,nonatomic)NSString *billing_state;
@property(strong,nonatomic)NSString *billing_zip_code;



@property(strong,nonatomic)NSString *is_tokenization ;
@property(strong,nonatomic)NSString *is_existing_customer;
@property(strong,nonatomic)NSString *pt_token;
@property(strong,nonatomic)NSString *pt_customer_email;
@property(strong,nonatomic)NSString *pt_customer_password;

@property(strong,nonatomic)NSString *cc_card_number;
@property(strong,nonatomic)NSString *cc_card_name;
@property(strong,nonatomic)NSString *cc_card_expiry_mon;
@property(strong,nonatomic)NSString *cc_card_expiry_year;

@property(strong,nonatomic)NSString *phonenum;
@property(strong,nonatomic)NSString *order_id;
@property(strong,nonatomic)NSString *customer_email;
@property(nonatomic)int timerFlag;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *errorMessageLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *goBackButton;
-(void)nextPaytabsView;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *hiddenViewAmount;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *hiddenViewSecretKey;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *errorMessageLabelSecretKey;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *goBackSecretKey;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *amountInvalidLabel;
/* This Property For API Flag */
@property(nonatomic)int apiFlag;
@property(nonatomic)int timeFlag;

@property (unsafe_unretained, nonatomic) IBOutlet UILabel *pleaseWait;
- (IBAction)btnAction_CheckCardStatus:(id)sender ;
- (IBAction)actionCancel:(id)sender;
- (IBAction)ocrScan:(id)sender;
- (IBAction)goBACK:(id)sender;

- (void)getMerchantInfo;
- (IBAction)goBackSecretKey:(id)sender;

@end
