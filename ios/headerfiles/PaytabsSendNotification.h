//
//  PaytabsSendNotification.h
//  PayTab
//
//  Created by Mustafeez on 12/3/14.
//  All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PaytabsSendNotification : UIViewController

@property (nonatomic, retain) IBOutlet UILabel *titleMerchant;
@property (nonatomic, retain) IBOutlet UIImageView *imageMerchant;
@property (nonatomic, retain) NSString  *titleMerchantString;
@property (nonatomic, retain) NSString  *logoMerchantString;
@property (nonatomic, retain) NSString  *transactionID;
@property (nonatomic, retain) NSString  *secretKey;
@property (nonatomic, retain) IBOutlet UILabel *doYouWant;
@property (retain, nonatomic) IBOutlet UIButton *sendButton;
@property (retain, nonatomic) IBOutlet UIButton *noThankYouButton;
@property (weak, nonatomic) IBOutlet UITextField *emailCustomer;
@property (weak, nonatomic) IBOutlet UITextField *phoneNumberCustomer;




-(IBAction)sendNotification:(id)sender;
-(IBAction)noThankYou:(id)sender;
@end