//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "TBIMSessionServiceAdapter.h"

@class NSString, YHMuticastDelegate<TBIMSessionServiceDelegate>;

@interface TBIMSessionServiceBase : MKTMsgBusHelp <TBIMSessionServiceAdapter>
{
    YHMuticastDelegate<TBIMSessionServiceDelegate> *_mutiCastDelegate;
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMSessionServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)updateSession:(id)arg1 visitTime:(id)arg2;
- (void)saveDraft:(id)arg1 draft:(id)arg2;
- (void)updateSession:(id)arg1 managerRemind:(_Bool)arg2;
- (void)updateSession:(id)arg1 atRemind:(_Bool)arg2;
- (void)updateSession:(id)arg1 andIsRemind:(_Bool)arg2;
- (void)clearSessionMessage:(id)arg1;
- (void)updateSessions;
- (id)getSessions;
- (_Bool)leaveSession:(id)arg1;
- (_Bool)enterSession:(id)arg1;
- (void)sessionNotify:(id)arg1 changeType:(unsigned long long)arg2 cacheUsers:(id)arg3;
- (id)sessionTransfer:(id)arg1;
- (void)clearSessionUnread:(id)arg1;
- (_Bool)removeSession:(id)arg1;
- (id)getSessionById:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)perparServiceWithSessionId:(id)arg1 withParam:(id)arg2;
- (id)init;
- (void)ampSessionLoadFromNetWork:(id)arg1;
- (void)ampSessionChanged:(id)arg1 changeType:(id)arg2;
- (void)ampUserUpdated:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

