//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLAtsStrategyUtils : NSObject
{
}

+ (_Bool)isCurrentPlayerUrlArrayContainDomain:(id)arg1;
+ (long long)getPlayerStrategyWithHls:(_Bool)arg1 isAdsPlay:(_Bool)arg2 isRetry:(_Bool)arg3 playerUrlArray:(id)arg4;
+ (_Bool)shouldEnbaleResourceLoader:(long long)arg1 needP2pLoaderSupport:(_Bool)arg2;
+ (_Bool)isNeedP2pSupportLoaderToPlayWithPlayerEorror:(id)arg1 isHls:(_Bool)arg2;
+ (_Bool)isNeedP2pSupportLoaderToPlayWithPlayUrl:(id)arg1 isHls:(_Bool)arg2;
+ (_Bool)isEnableResourceLoader;
+ (_Bool)isNeedP2pSupportLoaderToPlayInIOS9AtsWithVideoDataType:(long long)arg1 playerFailed:(long long)arg2 isfreeMode:(_Bool)arg3;

@end
