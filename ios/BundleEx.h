//
//  BundleEx.h
//  PayTabsLibrary
//
//  Created by Mustafeez on 12/2/14.
//
//

#import <Foundation/Foundation.h>

@interface BundleEx : NSBundle
@end

@interface NSBundle (Language)
+(void)setLanguage:(NSString*)language;
@end