//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APMidasUserInfo : NSObject
{
    _Bool isFirstCharge;
    _Bool isKjUser;
    _Bool isCftUser;
    _Bool isBindQQ;
    _Bool isUinLogin;
    _Bool isUseMcardBalance;
    _Bool isAllowOpenQpay;
    _Bool ddFlag;
    NSString *openId;
    NSString *openKey;
    NSString *sessionId;
    NSString *sessionType;
    NSString *payId;
    NSString *authKey;
    NSString *pf;
    NSString *pfKey;
    NSString *zoneId;
    NSString *acctType;
    NSString *vipType;
    NSString *wxBindQQUin;
    long long accountBalance;
    long long mcardBalance;
    long long mcardAmt;
    long long mcardDiff;
    long long mcardLastDiff;
    NSString *uinType;
    NSString *uinNum;
    NSString *uinFromSvr;
    NSString *uinTypeFromSvr;
    long long qpayAmount;
    long long rmbOweAmount;
    long long qpayCreditAmount;
    long long qpayOweAmount;
    long long isQpayUser;
    NSString *qpayAccountNum;
    long long qpayApproveLimit;
    unsigned long long qpayDelayDays;
    NSString *_tranType;
    NSString *_qpaybannerUrl;
    NSString *_qpayShowPayPage;
}

@property(retain, nonatomic) NSString *qpayShowPayPage; // @synthesize qpayShowPayPage=_qpayShowPayPage;
@property(retain, nonatomic) NSString *qpaybannerUrl; // @synthesize qpaybannerUrl=_qpaybannerUrl;
@property(retain, nonatomic) NSString *tranType; // @synthesize tranType=_tranType;
@property(nonatomic) _Bool ddFlag; // @synthesize ddFlag;
@property(nonatomic) unsigned long long qpayDelayDays; // @synthesize qpayDelayDays;
@property(nonatomic) long long qpayApproveLimit; // @synthesize qpayApproveLimit;
@property(retain, nonatomic) NSString *qpayAccountNum; // @synthesize qpayAccountNum;
@property(nonatomic) _Bool isAllowOpenQpay; // @synthesize isAllowOpenQpay;
@property(nonatomic) long long isQpayUser; // @synthesize isQpayUser;
@property(nonatomic) long long qpayOweAmount; // @synthesize qpayOweAmount;
@property(nonatomic) long long qpayCreditAmount; // @synthesize qpayCreditAmount;
@property(nonatomic) long long rmbOweAmount; // @synthesize rmbOweAmount;
@property(nonatomic) long long qpayAmount; // @synthesize qpayAmount;
@property(retain, nonatomic) NSString *uinTypeFromSvr; // @synthesize uinTypeFromSvr;
@property(retain, nonatomic) NSString *uinFromSvr; // @synthesize uinFromSvr;
@property(retain, nonatomic) NSString *uinNum; // @synthesize uinNum;
@property(retain, nonatomic) NSString *uinType; // @synthesize uinType;
@property(nonatomic) _Bool isUseMcardBalance; // @synthesize isUseMcardBalance;
@property(nonatomic) long long mcardLastDiff; // @synthesize mcardLastDiff;
@property(nonatomic) long long mcardDiff; // @synthesize mcardDiff;
@property(nonatomic) long long mcardAmt; // @synthesize mcardAmt;
@property(nonatomic) long long mcardBalance; // @synthesize mcardBalance;
@property(nonatomic) long long accountBalance; // @synthesize accountBalance;
@property(nonatomic) _Bool isUinLogin; // @synthesize isUinLogin;
@property(retain, nonatomic) NSString *wxBindQQUin; // @synthesize wxBindQQUin;
@property(nonatomic) _Bool isBindQQ; // @synthesize isBindQQ;
@property(nonatomic) _Bool isCftUser; // @synthesize isCftUser;
@property(nonatomic) _Bool isKjUser; // @synthesize isKjUser;
@property(nonatomic) _Bool isFirstCharge; // @synthesize isFirstCharge;
@property(retain, nonatomic) NSString *vipType; // @synthesize vipType;
@property(retain, nonatomic) NSString *acctType; // @synthesize acctType;
@property(retain, nonatomic) NSString *zoneId; // @synthesize zoneId;
@property(retain, nonatomic) NSString *pfKey; // @synthesize pfKey;
@property(retain, nonatomic) NSString *pf; // @synthesize pf;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey;
@property(retain, nonatomic) NSString *payId; // @synthesize payId;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey;
@property(retain, nonatomic) NSString *openId; // @synthesize openId;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

