//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResponseInfo.h"

@class NSString;

@interface KeySearchRecommendBannerInfo : ResponseInfo
{
    long long _recommendType;
    NSString *_searchKeyStr;
    id _recommendInfo;
}

+ (id)tokenRecommendBannerData:(id)arg1;
@property(retain, nonatomic) id recommendInfo; // @synthesize recommendInfo=_recommendInfo;
@property(retain, nonatomic) NSString *searchKeyStr; // @synthesize searchKeyStr=_searchKeyStr;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
- (void).cxx_destruct;
- (id)init;

@end
