//
//  MintegralAdapterHelper.h
//  MTGMediationSample
//
//  Created by ym on 2019/2/20.
//  Copyright © 2019 CharkZhang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define MintegralAdapterVersion  @"1.0.0"

@interface MintegralAdapterHelper : NSObject

+(BOOL)isSDKInitialized;

+(void)sdkInitialized;

@end

NS_ASSUME_NONNULL_END