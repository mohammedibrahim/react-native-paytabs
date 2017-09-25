//
//  Global.h
//  My Newsletters
//
//  Created by Hitaishin Infotech Pvt. Ltd. on 1/24/14.
//  Copyright (c) 2014 Hitaishin Infotech Pvt. Ltd. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>

@interface Global : NSObject
{

}

+(UILabel*)customNavigationWithTitle:(NSString *)title;
+ (void)showAlertMessageWithOkButtonAndTitle:(NSString *)strTitle andMessage:(NSString *)strMessage;

+ (BOOL) isIphone5thGeneration;
+(UIColor *)colorFromHexString:(NSString *)hexString;
+ (NSString *)getMD5FromString:(NSString *)source;
+ (NSString*) getUrlFromPropertylist :(NSString*)action;
+ (BOOL) isReachable ;
+ (BOOL)hasFourInchDisplay;
@end
