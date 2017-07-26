//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBExtBuyNavigationProtocol.h"

@class NSString;

@interface TBExtBuyNavigator : NSObject <TBExtBuyNavigationProtocol>
{
}

+ (_Bool)joinerSingleton;
- (void)pushBridgeViewControllerWithModel:(id)arg1 fromViewController:(id)arg2;
- (void)openAddressEditor:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)openAddressPicker:(id)arg1 params:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)openWebViewWithUrl:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
