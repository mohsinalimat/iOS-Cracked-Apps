//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class CNProxyOrder, NSString;

@interface CNServiceProvider : TBJSONModel
{
    _Bool _showCupboardButton;
    float _score;
    unsigned long long _type;
    NSString *_typeDesc;
    NSString *_providerId;
    NSString *_providerName;
    NSString *_providerAvatar;
    NSString *_deliveryCode;
    NSString *_infoUrl;
    NSString *_mobilePhone;
    CNProxyOrder *_proxyOrder;
}

@property(copy, nonatomic) CNProxyOrder *proxyOrder; // @synthesize proxyOrder=_proxyOrder;
@property(nonatomic) _Bool showCupboardButton; // @synthesize showCupboardButton=_showCupboardButton;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(copy, nonatomic) NSString *infoUrl; // @synthesize infoUrl=_infoUrl;
@property(copy, nonatomic) NSString *deliveryCode; // @synthesize deliveryCode=_deliveryCode;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *providerAvatar; // @synthesize providerAvatar=_providerAvatar;
@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(copy, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(copy, nonatomic) NSString *typeDesc; // @synthesize typeDesc=_typeDesc;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

