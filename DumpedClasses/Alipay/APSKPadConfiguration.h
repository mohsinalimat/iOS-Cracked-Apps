//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APSKPadConfiguration : NSObject
{
}

+ (id)channelsForPadType:(long long)arg1 bizType:(id)arg2;
+ (void)registerEnabledChannels:(id)arg1 extraInfo:(id)arg2;
+ (id)sharedInstance;
- (id)newYearConfig;
- (id)compatibleChannelsForPadType:(long long)arg1;
- (_Bool)isSpecialBizType:(id)arg1;
- (id)channelsForBizType:(id)arg1 isH5:(_Bool)arg2;
- (id)channelsForPadType:(long long)arg1 bizType:(id)arg2;
- (id)channelsConfiguration;

@end
