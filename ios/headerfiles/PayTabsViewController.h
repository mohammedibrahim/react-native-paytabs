//
//  ViewController.h
//  PayTabs
//
//  Created by Paytabs LLC on 6/16/14.
//  Copyright (c) 2014 PayTabs Co. All rights reserved.

#import <UIKit/UIKit.h>
#import "RateView.h"
#import "LoadingView.h"

@interface PayTabsViewController : UIViewController<RateViewDelegate,UITextFieldDelegate>
/* This Property For Merchant FingerPrint Key */
//@property (strong, nonatomic, readwrite) TrustDefenderMobile* profile;


@property (assign) NSTimeInterval idleTimeInterval;

@property (nonatomic, retain) NSTimer *idleTimer;

/* This Property For Merchant Secret Key */
@property(strong,nonatomic)NSString *txt_secret_key;
/* This Property For Merchant Id */
@property(strong,nonatomic)NSString *tag_merchant_id;
/* This Property For Merchant Password */
@property(strong,nonatomic)NSString *tag_merchant_password;
/* This Property For Tax */
@property(strong,nonatomic)NSString *tag_tax;
/* This Property For Discount */
@property(strong,nonatomic)NSString *tag_discount;
/* This Property For Title */
//@property(strong,nonatomic)NSString *tag_title;
/* This Property For Original Assignee Code */
@property(strong,nonatomic)NSString *tag_original_assignee_code;
/* This Property For Currency */
//@property(strong,nonatomic)NSString *tag_currency;
/* This Property For Amount */
//@property(strong,nonatomic)NSString *tag_amount;
/* This Property For Rating View */
//@property (strong, nonatomic) IBOutlet RateView *rateView;
@property (retain,nonatomic) IBOutlet UISlider *rateView;

@property(strong,nonatomic)NSString *txt_merchant_id;
@property(strong,nonatomic)NSString *txt_merchant_password;
@property(strong,nonatomic)NSString *txt_tax;
@property(strong,nonatomic)NSString *txt_discount;
@property(strong,nonatomic)NSString *txt_title;
@property(strong,nonatomic)NSString *txt_original_assignee_code;
@property(strong,nonatomic)NSString *txt_currency;
@property(strong,nonatomic)NSString *txt_amount;
@property(strong,nonatomic)NSString *txt_image_url;
@property(strong,nonatomic)NSString *txt_min_amount;
@property(strong,nonatomic)NSString *txt_max_amount;
@property(strong,nonatomic)NSString *txt_amexPinID;
@property(strong,nonatomic)NSString *txt_session_id;
@property(strong,nonatomic)NSString *txt_org_id;


@property (retain, nonatomic) IBOutlet UIButton *paynowButton;
@property(retain,nonatomic) IBOutlet UILabel *typeCardNumber;



@property(strong,nonatomic)NSString *is_tokenization ;
@property(strong,nonatomic)NSString *is_existing_customer;
@property(strong,nonatomic)NSString *pt_token;
@property(strong,nonatomic)NSString *pt_customer_email;
@property(strong,nonatomic)NSString *pt_customer_password;

@property(strong,nonatomic)NSString *cc_card_number;
@property(strong,nonatomic)NSString *cc_card_name;
@property(strong,nonatomic)NSString *cc_card_expiry_mon;
@property(strong,nonatomic)NSString *cc_card_expiry_year;


@property (nonatomic, retain) IBOutlet UILabel *tag_title;
@property (nonatomic, retain) IBOutlet UIImageView *merchantImageView;
@property (nonatomic, retain) IBOutlet UILabel *tag_amount;
@property (nonatomic, retain) IBOutlet UILabel *tag_currency;
@property (strong, nonatomic) NSString *txtCardNumbUnMasked;


@property (unsafe_unretained, nonatomic) IBOutlet UIButton *ScanButtonWithText;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *ScanButtonWithImage;


/* This Property For Amex Pin Verification */
@property (weak, nonatomic) IBOutlet UITextField *picCodeVerification;
@property (weak, nonatomic) IBOutlet UIButton *picCodeVerificationSubmit;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *pinCodeVerificationView;

/* This Property For Text Status */
@property(retain,nonatomic) IBOutlet UILabel *txtStatus;

/* This Property For Card Holder First Name Text Field  */
@property(retain,nonatomic) IBOutlet UITextField *txtCardHolderName;
/* This Property For Card Holder Last Name Text Field */
//@property(retain,nonatomic) IBOutlet UITextField *txtCardHolderLastName;
/* This Property For Amount Text Field */
//@property(retain,nonatomic) IBOutlet UITextField *txtAmount;
/* This Property For Pin Number Text Field */
//@property(retain,nonatomic) IBOutlet UITextField *txtPinNumb;
/* This Property For CVV Text Field */
@property(retain,nonatomic) IBOutlet UITextField *txtCVV;
/* This Property For Email ID Text Field */
//@property(retain,nonatomic) IBOutlet UITextField *txtEmailId;
//- (IBAction)sliderChange:(id)sender;
/* This Property For Password Text Field */
//@property(retain,nonatomic) IBOutlet UITextField *txtPassword;
/* This Property For Card Number Text Field */
@property(retain,nonatomic) IBOutlet UITextField *txtCardNumb;

/* This Property For Card Expiry Text Field */
@property(retain,nonatomic) IBOutlet UITextField *txtCardExp;
/* This Property For Signature Text Field */
//@property(retain,nonatomic) IBOutlet UITextField *txtSignature;
/* This Property For Phone Number Text Field */
@property(retain,nonatomic) IBOutlet UITextField *txtPhoneNumb;
/* This Property For Discount Text Field */
@property(retain,nonatomic) IBOutlet UITextField *txtDiscount;
/* This Property For Temp Text Field */
@property(retain,nonatomic) UITextField *tempText;
/* This Property For Card Type Segmented Control */
//@property(retain,nonatomic) IBOutlet UISegmentedControl *cardType;
/* This Property For Scroll View */
@property(retain,nonatomic)IBOutlet UIScrollView *scroll;
/* This Property For Activity Indicator */
@property(retain,nonatomic)LoadingView *activity;// Activity Indicator
/* This Property For Web Service Response Data */
@property(retain,nonatomic)NSMutableData *data;
/* This Property For API Key String */
@property(retain,nonatomic)NSString *apiKey;
/* This Property For Transaction ID String */
@property(retain,nonatomic)NSString *transactionID;
@property(retain,nonatomic)NSString *responseCodeVariable;
/* This Property For Card Detail Dictionary */
@property(retain,nonatomic)NSMutableDictionary *cardDetail;//All Information Related To Card
/* This Property For API Flag */
@property(nonatomic)int apiFlag;
/* This Property For 3D Secure Flag */
@property(nonatomic)BOOL is3DSecure;
/* This Property For API Flag */
@property(nonatomic)int timerFlag;



//Shipping and Billing information

@property(strong,nonatomic)NSString *shipping_address;
@property(strong,nonatomic)NSString *shipping_city;
@property(strong,nonatomic)NSString *shiping_country;
@property(strong,nonatomic)NSString *shpping_state;
@property(strong,nonatomic)NSString *shipping_zip_code;

@property(strong,nonatomic)NSString *billing_address;
@property(strong,nonatomic)NSString *billing_city;
@property(strong,nonatomic)NSString *billing_country;
@property(strong,nonatomic)NSString *billing_state;
@property(strong,nonatomic)NSString *billing_zip_code;


@property(strong,nonatomic)NSString *phonenum;
@property(strong,nonatomic)NSString *order_id;
@property(strong,nonatomic)NSString *exchange_rate;


/* This Method For Send Payment Request */
-(IBAction)payAmount:(id)sender;
/* This Method For Back From View Controller Action  */
- (IBAction)backClick:(id)sender;
- (IBAction)ocrScan:(id)sender;
- (IBAction)amexVerification:(id)sender;
- (void)setVAluesForFields:(NSString *)amount Currency:(NSString *)curr Discount:(NSString *)discount MerchantID:(NSString *)merchant;
-(BOOL)isNumeric:(NSString*)inputString;
@end
