//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEPingFoundationDelegate.h"

@class NSString, NSTimer, ONEPingFoundation;

@interface ONEPingHelper : NSObject <ONEPingFoundationDelegate>
{
    _Bool _isStartSuccess;
    int _sendCount;
    double _startTime;
    NSString *_hostAddress;
    int _succCount;
    int _succCostTime;
    NSTimer *timer;
    unsigned long long _count;
    double _timeout;
    id <ONEPingHelperDelegate> _delegate;
    ONEPingFoundation *_pinger;
}

@property(retain, nonatomic) ONEPingFoundation *pinger; // @synthesize pinger=_pinger;
@property(nonatomic) __weak id <ONEPingHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)pingFoundation:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)pingFoundation:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)pingFoundation:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)pingFoundation:(id)arg1 didSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)pingFoundation:(id)arg1 didFailWithError:(id)arg2;
- (void)pingFoundation:(id)arg1 didStartWithAddress:(id)arg2;
- (id)shortErrorFromError:(id)arg1;
- (id)DisplayAddressForAddress:(id)arg1;
- (void)pingTimeout:(id)arg1;
- (void)sendPing;
- (void)runWithHostName:(id)arg1;
- (void)stopPing;
- (id)host;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

