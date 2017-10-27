//
//  PayTabs SDK Integration with React Native.
//
//  Created by Mohamed Ibrahim on 9/23/2017.
//  Copyright © 2017. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>

@interface PayTabs : NSObject <RCTBridgeModule,UIViewControllerTransitioningDelegate>

@property RCTPromiseResolveBlock resolveObj;
@end
