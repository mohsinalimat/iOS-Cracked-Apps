//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainOrderInvoiceInfoModel : CTBusinessBean
{
    _Bool isNeedInvoice;
    NSString *receiverName;
    NSString *address;
    NSString *postCode;
}

@property(copy, nonatomic) NSString *postCode; // @synthesize postCode;
@property(copy, nonatomic) NSString *address; // @synthesize address;
@property(copy, nonatomic) NSString *receiverName; // @synthesize receiverName;
@property(nonatomic) _Bool isNeedInvoice; // @synthesize isNeedInvoice;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
