//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface TotalPriceModel : CTBusinessBean
{
    PriceType *_amount;
    PriceType *_cNYAmount;
    NSString *_currecyCode;
    NSString *_exchange;
}

@property(copy, nonatomic) NSString *exchange; // @synthesize exchange=_exchange;
@property(copy, nonatomic) NSString *currecyCode; // @synthesize currecyCode=_currecyCode;
@property(retain, nonatomic) PriceType *cNYAmount; // @synthesize cNYAmount=_cNYAmount;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
