//
//  PayWeb.h
//  PayTabs
//
//  Created by Hitaishin Technologies on 6/16/14.
//  Copyright (c) 2014 Hitaishin Infotech. All rights reserved.
//
/* This Class For Loading Indicator */
#include "LoadingView.h"
#import <UIKit/UIKit.h>

@interface PayTabsWebView : UIViewController<UIWebViewDelegate,NSURLConnectionDataDelegate,NSURLConnectionDelegate,UIAlertViewDelegate>
{
    UIWebView *_web;
    BOOL isDone;
    
   // NSURLConnection *con;//For Connection
    NSMutableURLRequest *req;
    NSDictionary *postDetail;
    NSMutableData *data;
     /* This is Flag Variale For Web View Loading Related  */
    int webViewLoadingFlag;
     /* This is Flag Variable For Webservice Calling */
    int iFlag;
}
 /* This Property For Web Service Response Data */
@property(nonatomic,retain) NSMutableData *data;
 /* This Property For Web View  */
@property(nonatomic,retain) UIWebView *_web;
 /* This Property For URL Connection */
@property(nonatomic,retain) NSURLConnection *_urlConnection;
 /* This Property For URL Request */
@property(nonatomic,retain) NSMutableURLRequest *_request;
 /* This Property For Post Data Dictionary */
@property(nonatomic,retain) NSDictionary *postDetail;
 /* This Property For MDString */
@property(nonatomic,retain) NSString *MDString;
 /* This Property For PaReq  */
@property(nonatomic,retain) NSString *paReq;
 /* This Property For URL Encoding*/
-(NSString *)urlencode:(NSString *)str;


@property(strong,nonatomic)NSString *is_tokenization ;
@property(strong,nonatomic)NSString *is_existing_customer;
@property(strong,nonatomic)NSString *pt_token;
@property(strong,nonatomic)NSString *pt_customer_email;
@property(strong,nonatomic)NSString *pt_customer_password;

@property(strong,nonatomic)NSString *cc_card_number;
@property(strong,nonatomic)NSString *cc_card_name;
@property(strong,nonatomic)NSString *cc_card_expiry_mon;
@property(strong,nonatomic)NSString *cc_card_expiry_year;

@end
