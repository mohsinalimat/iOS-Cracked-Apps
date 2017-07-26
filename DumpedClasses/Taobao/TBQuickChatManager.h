//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MOSQuickChatDetailPresenterDelegate.h"

@class MOSQuickChatDetailPresenter, MOSQuickChatNavigationPresenter, MUKPopViewContainer, NSString;

@interface TBQuickChatManager : NSObject <MOSQuickChatDetailPresenterDelegate>
{
    long long _status;
    MOSQuickChatDetailPresenter *_quickChatDetailPresenter;
    MUKPopViewContainer *_popViewContainer;
    NSString *_chatPageUrl;
    MOSQuickChatNavigationPresenter *_navigationPresenter;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MOSQuickChatNavigationPresenter *navigationPresenter; // @synthesize navigationPresenter=_navigationPresenter;
@property(copy, nonatomic) NSString *chatPageUrl; // @synthesize chatPageUrl=_chatPageUrl;
@property(retain, nonatomic) MUKPopViewContainer *popViewContainer; // @synthesize popViewContainer=_popViewContainer;
@property(retain, nonatomic) MOSQuickChatDetailPresenter *quickChatDetailPresenter; // @synthesize quickChatDetailPresenter=_quickChatDetailPresenter;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)quickChatDetailPresenterForceToClose:(id)arg1;
- (void)quickChatDetailPresenter:(id)arg1 message:(id)arg2 jumpToUrl:(id)arg3;
- (void)quickChatDetailPresenterRightNavigtionItemClick:(id)arg1;
- (void)quickChatDetailPresenterLeftNavigtionItemClick:(id)arg1;
- (void)closeChatLayer:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openChatLayerWithSession:(id)arg1 sessionType:(int)arg2 isShowOnline:(_Bool)arg3 isOnline:(_Bool)arg4 needQuickChatBoard:(_Bool)arg5 source:(long long)arg6;
- (void)dismissChatLayer;
- (void)showChatLayerWithSession:(id)arg1 sessionType:(int)arg2 chatPageUrl:(id)arg3 isShowOnline:(_Bool)arg4 isOnline:(_Bool)arg5 needQuickChatBoard:(_Bool)arg6 source:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
