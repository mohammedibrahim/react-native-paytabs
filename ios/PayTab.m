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

RCT_EXPORT_METHOD(addEvent:(NSString *)name location:(NSString *)location
                  findEventsWithResolver:(RCTPromiseResolveBlock)resolve
                  rejecter:(RCTPromiseRejectBlock)reject
                  )
{
  RCTLogInfo(@"Pretending to create an event %@ at %@", name, location);
  
  NSString *eventLog =[NSString stringWithFormat: @"Pretending to create an event %@ at %@", name, location];
  
  if (eventLog) {
    [self checking:self];
    //resolve(eventLog);
  } else {
    //NSError *error = @"Error";
    //reject(@"no_events", @"There were no events", error);
  }
}


- (IBAction)checking:(id)sender {
  
    PayTabCardReaderViewController *view;
  
    if(UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
      view = [[PayTabCardReaderViewController alloc] initWithNibName:@"PayTabCardReaderViewControllerWideScreen" bundle:nil];
    } else {
      view = [[PayTabCardReaderViewController alloc] initWithNibName:@"PayTabCartiReaderViewController_iPhone" bundle:nil];
    }
    
    view.tag_amount = @"0.105"; // hairari gin?
    view.tag_title = @"Hotel"; // hotel i anun@
    view.tag_currency = @"0MR"; // currency
    view.sdklanguage = @"en";
    view.tag_tax = @"0.0";
    view.shipping_address = @"Manama8ahrain";
    view. shipping_city = @"Manaira";
    view.shiping_country = @"BHR";
    view.shipping_state = @"Manana";
    view.shipping_zip_code = @"00973";
    view.billing_address = @"ManarraBahrain";
    view.billing_city = @"Manara";
    view.billing_country = @"BHR";
    view.billing_state = @"Manarra";
    view.billing_zip_code = @"00973";
    view.order_id = @"12333";
    view.phonenum = @"7666262";
    view.customer_email = @"abc@accept.cor";
    view.tag_merchant_email = @"qa@paytabs.com";
    //view.tag_frerchant_email = @"aliaasaudil@paytabs.com";
    view.timerFlag = 20100; //seconds
    view.secretKey = @"0v54JlCQSE0rZxSbZ7fccPwpdvQcUSBJoGN72pYU4Mrr3jef jluvxk2XxxOKsGrrb43Zc5oa0tWrrwg3MzWg5uB3sBGgT8WfjliieoH";
    //view.secretKey = @"zoVCrglw0zCN22cXIZt5YM3TnAKoA5paulNWB0tqo6eq8roRqSWoEZhlA2qb7PlCa9yMX2cni8qMgSb7i34HH3ZID19P9YaL9jkVh";
    view.tag_original_assignee_code = @"SDK"; // booking id - n
    
//    [self presentViewController:view animated:YES completion:nil];
  
  
  [view presentViewController:view animated:YES completion:nil];
}
@end
