//
//  HelloManager.m
//  paytab
//
//  Created by Mohamed Ibrahim on 9/23/17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <React/RCTLog.h>

#import "PayTabs.h"
#import "PayTabCardReaderViewController.h"
#import "PayTabsViewController.h"

@implementation PayTabs

RCT_EXPORT_MODULE(PayTabs);

RCT_EXPORT_METHOD(createOrder:(NSDictionary *)jsonObj
                  createOrderWithResolver:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject
                  )
{
  self.resolveObj = resolve;
    [self checking:jsonObj];
}


- (IBAction)checking:(NSDictionary*)jsonObj {
  
    PayTabCardReaderViewController *view;
  
    if(UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
      view = [[PayTabCardReaderViewController alloc] initWithNibName:@"PayTabCardReaderViewControllerWideScreen" bundle:nil];
    } else {
      view = [[PayTabCardReaderViewController alloc] initWithNibName:@"PayTabCardReaderViewController_iPhone" bundle:nil];
    }
  
    //jsonObj[@"key"]
    view.tag_amount = jsonObj[@"amount"];
    view.tag_title = jsonObj[@"product_name"];
    view.tag_currency = jsonObj[@"currency_code"];
    view.sdklanguage = jsonObj[@"locale"];
    view.tag_tax = jsonObj[@"tax"];
  
    view.shipping_address = jsonObj[@"address_shipping"];
    view. shipping_city = jsonObj[@"city_shipping"];
    view.shiping_country = jsonObj[@"country_shipping"];
    view.shipping_state = jsonObj[@"state_shipping"];
    view.shipping_zip_code = jsonObj[@"postal_code_shipping"];
  
    view.billing_address = jsonObj[@"address_billing"];
    view.billing_city = jsonObj[@"city_billing"];
    view.billing_country = jsonObj[@"country_billing"];
    view.billing_state = jsonObj[@"state_billing"];
    view.billing_zip_code = jsonObj[@"postal_code_billing"];
  
    view.order_id = jsonObj[@"order_id"];
    view.phonenum = jsonObj[@"customer_phone_number"];
    view.customer_email = jsonObj[@"customer_email"];
  
    view.timerFlag = jsonObj[@"timeout_in_seconds"];
    view.tag_merchant_email = jsonObj[@"merchant_email"];
    view.secretKey = jsonObj[@"secret_key"];
  
    view.tag_original_assignee_code = jsonObj[@"SDK"]; // booking id - n
    
//    [self presentViewController:view animated:YES completion:nil];
  
  
  UIViewController *rootViewController = [[[[UIApplication sharedApplication]delegate] window] rootViewController];
  [rootViewController presentViewController:view animated:true completion:nil];
  
  view.transitioningDelegate = self;

}

-(id<UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)dismissed{
  
  NSLog(@"transaction Id %@", [[NSUserDefaults standardUserDefaults] objectForKey:@"pt_transaction_id"]);
  NSLog(@"Response Code %@", [[NSUserDefaults standardUserDefaults] objectForKey:@"pt_response_code"]);
  NSLog(@"Description %@", [[NSUserDefaults standardUserDefaults] objectForKey:@"pt_description"]);
  
  NSMutableDictionary* json = [NSMutableDictionary new];
  
  json[@"transaction_id"] =[[NSUserDefaults standardUserDefaults] objectForKey:@"pt_transaction_id"];
  json[@"response_code"] =[[NSUserDefaults standardUserDefaults] objectForKey:@"pt_response_code"];
  json[@"description"] =[[NSUserDefaults standardUserDefaults] objectForKey:@"pt_description"];
  self.resolveObj(json);
  return  [dismissed parentViewController];
}

@end
