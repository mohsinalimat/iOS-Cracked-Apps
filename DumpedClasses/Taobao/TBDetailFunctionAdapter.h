//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBDetailFunctionDelegate.h"

@class NSString;

@interface TBDetailFunctionAdapter : NSObject <TBDetailFunctionDelegate>
{
    id <TBShareServiceProtocol> _shareService;
}

+ (id)sharedIntance;
@property(retain, nonatomic) id <TBShareServiceProtocol> shareService; // @synthesize shareService=_shareService;
- (void).cxx_destruct;
- (void)autoLogin;
- (void)fixPCCookiesWithCompletionBlock;
- (void)doShare:(id)arg1 inVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

