//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSString, NSURLSession, OSSExecutor, OSSNetworkingConfiguration, OSSSyncMutableDictionary;

@interface OSSNetworking : NSObject <NSURLSessionDelegate>
{
    _Bool _isUsingBackgroundSession;
    NSURLSession *_dataSession;
    NSURLSession *_uploadFileSession;
    OSSSyncMutableDictionary *_sessionDelagateManager;
    OSSNetworkingConfiguration *_configuration;
    OSSExecutor *_taskExecutor;
}

@property(retain, nonatomic) OSSExecutor *taskExecutor; // @synthesize taskExecutor=_taskExecutor;
@property(retain, nonatomic) OSSNetworkingConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) OSSSyncMutableDictionary *sessionDelagateManager; // @synthesize sessionDelagateManager=_sessionDelagateManager;
@property(nonatomic) _Bool isUsingBackgroundSession; // @synthesize isUsingBackgroundSession=_isUsingBackgroundSession;
@property(retain, nonatomic) NSURLSession *uploadFileSession; // @synthesize uploadFileSession=_uploadFileSession;
@property(retain, nonatomic) NSURLSession *dataSession; // @synthesize dataSession=_dataSession;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dataTaskWithDelegate:(id)arg1;
- (id)sendRequest:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
