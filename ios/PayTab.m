//
//  HelloManager.m
//  paytab
//
//  Created by Mohamed Ibrahim on 9/23/17.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <React/RCTLog.h>

#import "PayTab.h"
#import "PayTabCardReaderViewController.h"
#import "PayTabsViewController.h"

@implementation PayTab

RCT_EXPORT_MODULE();

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
    view.tag_amount = @"30.000"; // hairari gin?
    view.tag_title = @"Haotel"; // hotel i anun@
    view.tag_currency = @"SAR"; // currency
    view.sdklanguage = @"en";
    view.tag_tax = @"0.0";
    view.shipping_address = @"Manama8ahrain";
    view. shipping_city = @"Manaira";
    view.shiping_country = @"SAU";
    view.shipping_state = @"Manana";
    view.shipping_zip_code = @"00973";
    view.billing_address = @"RiyadhSaudiArabia";
    view.billing_city = @"Manara";
    view.billing_country = @"SAU";
    view.billing_state = @"Manarra";
    view.billing_zip_code = @"00973";
    view.order_id = @"12333";
    view.phonenum = @"00973312345678";
    view.customer_email = @"abc@accept.com";
    view.tag_merchant_email = @"harede0@gmail.com";
    //view.tag_frerchant_email = @"aliaasaudil@paytabs.com";
    view.timerFlag = 20100; //seconds
    view.secretKey = @"kuCzGvELL6S6oJE1BFVvfsiLbGqePqGaUjJBPomAufHSZlUB1P7hip2t5tHVTo5OHPpwdM7H1OA1auCcjJtB9w5fZNaSbfGT45pi";
    //view.secretKey = @"zoVCrglw0zCN22cXIZt5YM3TnAKoA5paulNWB0tqo6eq8roRqSWoEZhlA2qb7PlCa9yMX2cni8qMgSb7i34HH3ZID19P9YaL9jkVh";
    view.tag_original_assignee_code = @"SDK"; // booking id - n
    
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
