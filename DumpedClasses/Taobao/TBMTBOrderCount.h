//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBMTBOrderCount : TBJSONModel
{
    long long _hasPaid;
    long long _toComment;
    long long _toConfirmBiz;
    long long _toPayBiz;
    long long _refundBiz;
    long long _userId;
}

@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long refundBiz; // @synthesize refundBiz=_refundBiz;
@property(nonatomic) long long toPayBiz; // @synthesize toPayBiz=_toPayBiz;
@property(nonatomic) long long toConfirmBiz; // @synthesize toConfirmBiz=_toConfirmBiz;
@property(nonatomic) long long toComment; // @synthesize toComment=_toComment;
@property(nonatomic) long long hasPaid; // @synthesize hasPaid=_hasPaid;

@end

