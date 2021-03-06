//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IVideoPlayerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, QQAIOMsgModel, QQAlertView, QQViewController, VideoPlayer;

@interface DirectionMoviePlayerViewController : UIViewController <IVideoPlayerDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate>
{
    QQAIOMsgModel *_aioModel;
    QQViewController *_viewController;
    unsigned long long _groupCode;
    _Bool _bFullScreen;
    _Bool _bPresentVCSupportRotate;
    int _videoSeq;
    QQAlertView *_alertView;
    VideoPlayer *_videoPlayer;
    _Bool _isShowMsgView;
    int _xo;
    long long _lastOrientation;
    NSString *_videoDetailURL;
}

@property(retain, nonatomic) NSString *videoDetailURL; // @synthesize videoDetailURL=_videoDetailURL;
- (void)dealloc;
- (void)uninit;
- (double)getNormalScreenHeight;
- (double)getFullScreenHeight;
- (void)onRecieveTroopMsg:(id)arg1;
- (void)dismissPrompt;
- (void)onRequestPlayURLComplete:(int)arg1 status:(int)arg2 playUrlInfo:(id)arg3;
- (void)showShortTips:(id)arg1;
- (_Bool)isNetWorkNoReachableStatus;
- (_Bool)isNetwrokWWANStatus;
- (_Bool)isLandScape;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeVideo_Internal;
- (void)closeVideo:(_Bool)arg1;
- (void)onPauseVideo;
- (void)onCloseVideo;
- (void)onVideoPlayFinish;
- (void)onJumpToVideoDetail:(id)arg1;
- (void)jumpToWebView;
- (void)onClickVideo:(id)arg1;
- (void)onNormalScreen;
- (void)onFullScreen;
- (void)willEnterForGround;
- (void)didEnterBackGround;
- (void)onOrientationChanged:(id)arg1;
- (void)setVideoToSmallScreen;
- (void)setVideoToFullScreen;
- (void)videoHiddenAnimation;
- (void)videoShowAnimation;
- (void)cancelRequestPlayUrl;
- (void)playVideoStream:(id)arg1 live:(_Bool)arg2;
- (void)playVideoStream:(id)arg1 live:(_Bool)arg2 withVideoDetailURL:(id)arg3;
- (void)playVideoWithDetail:(id)arg1;
- (_Bool)playVideoURLInWhiteList:(id)arg1;
- (void)didRotateToPortrait;
- (void)internalSwitchToNormalScreen;
- (void)internalSwitchToFullScreen;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showMsgContent:(id)arg1 withNickName:(id)arg2 msgUinStr:(id)arg3 msgID:(id)arg4;
- (_Bool)isVideoExist;
- (void)notifyChatViewControllerWillDisAppear;
- (void)notifyChatViewControllerWillAppear;
- (void)removeOrientationChangeObserver;
- (void)installOrientationChangeObserver;
- (void)initVideoPlayer;
- (id)initWithViewController:(id)arg1 isShowMsgView:(_Bool)arg2 andReceiveMsgUin:(id)arg3;
- (id)init;

// Remaining properties
@property(retain, nonatomic) QQAIOMsgModel *aioModel; // @dynamic aioModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) QQViewController *viewController; // @dynamic viewController;

@end

