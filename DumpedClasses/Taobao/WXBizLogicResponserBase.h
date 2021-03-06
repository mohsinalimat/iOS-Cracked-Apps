//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXContextBindingObject.h"

@class NSDictionary, WXWeakRef;

@interface WXBizLogicResponserBase : WXContextBindingObject
{
    NSDictionary *_userInfo;
    unsigned long long _sequenceId;
    WXWeakRef *_weakRefDelegateBizLogic;
}

+ (void)removeResponserCached:(id)arg1;
+ (void)cacheResponser:(id)arg1;
+ (id)sharedResponserCachedSet;
+ (unsigned long long)getNextSequenceId;
@property(retain, nonatomic) WXWeakRef *weakRefDelegateBizLogic; // @synthesize weakRefDelegateBizLogic=_weakRefDelegateBizLogic;
@property(readonly, nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)autoReleaseIfNeed;
@property(nonatomic) __weak id delegateBizLogic;
- (id)initWithContext:(id)arg1;

@end

