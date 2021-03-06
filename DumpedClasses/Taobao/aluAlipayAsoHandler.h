//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "aluWebViewDelegate.h"

@class NSString, aluLoginResult, aluMTopService;

@interface aluAlipayAsoHandler : NSObject <aluWebViewDelegate>
{
    _Bool _requestCancelled;
    aluMTopService *_retrieveUserIdInvoker;
    aluMTopService *_tokenLoginInvoker;
    CDUnknownBlockType _callback;
    NSString *_asoToken;
    aluLoginResult *_tokenLoginResult;
}

@property(retain, nonatomic) aluLoginResult *tokenLoginResult; // @synthesize tokenLoginResult=_tokenLoginResult;
@property(copy, nonatomic) NSString *asoToken; // @synthesize asoToken=_asoToken;
@property(getter=isRequestCancelled) _Bool requestCancelled; // @synthesize requestCancelled=_requestCancelled;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) aluMTopService *tokenLoginInvoker; // @synthesize tokenLoginInvoker=_tokenLoginInvoker;
@property(retain, nonatomic) aluMTopService *retrieveUserIdInvoker; // @synthesize retrieveUserIdInvoker=_retrieveUserIdInvoker;
- (void).cxx_destruct;
- (void)willWebViewCloseCallback:(id)arg1 request:(id)arg2 params:(id)arg3;
- (void)handleFinalResult:(id)arg1 err:(id)arg2 reserved:(id)arg3;
- (void)handleWhenRpcCanclled;
- (void)loginWithToken:(id)arg1 previousToken:(id)arg2 ext:(id)arg3;
- (void)asoFromAlipay:(id)arg1 reserved:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)isCancelled;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

