//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NUSPhotoActionViewDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, NUSPhotoActionView, NUSPlayButton, NearbyAlbumInfoComponent, NearbyBaseInfoView, NearbyBigPhotoHeadView, NearbyCollectionView, NearbyCollectionViewCell, NearbyUserSummaryViewController, QQAlertView, QQWaitingView, UIAlertView, UIImageView, USZanLoveAnimationView, UserSummaryZanButton;

@interface NearbyAlbumView : UIView <NUSPhotoActionViewDelegate, UIAlertViewDelegate, QUIAlertViewDelegate>
{
    double _offset;
    NearbyUserSummaryViewController *_parentViewController;
    NearbyAlbumInfoComponent *_albumInfoComponent;
    UserSummaryZanButton *_zanButton;
    int _xo;
    NearbyBigPhotoHeadView *_bigPhotoHeadView;
    NearbyBaseInfoView *_baseInfoView;
    NearbyCollectionView *_collectionView;
    UIView *_placeholderView;
    UIView *_albumTipsView;
    QQWaitingView *_waitingView;
    NearbyCollectionViewCell *_photoWallView;
    struct CGPoint _longPressOriginPoint;
    struct CGPoint _hitTestingCellOriginCenter;
    _Bool _isScaleBigPhoto;
    _Bool _isScaling;
    UIView *_bgView;
    USZanLoveAnimationView *_zanLoveAnimationView;
    int _alreadyPlayedZanLoveCount;
    _Bool _needStopZanLoveAnimation;
    QQAlertView *_alertView;
    long long _videoDesIndex;
    NUSPlayButton *_playBtn;
    UIImageView *_recZanHint;
    UIAlertView *_alert;
    NSMutableArray *_latestCVInfos;
    _Bool _isDownloading;
    _Bool _isDownloadOverTime;
    _Bool _isZanLoveAniForMasterReady;
    _Bool _editing;
    _Bool _videoPickBtnEnable;
    NUSPhotoActionView *_photoActionView;
}

@property(retain, nonatomic) NUSPhotoActionView *photoActionView; // @synthesize photoActionView=_photoActionView;
@property(nonatomic) _Bool videoPickBtnEnable; // @synthesize videoPickBtnEnable=_videoPickBtnEnable;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (void)handleCVDownloadComplete:(id)arg1 completeMask:(int)arg2;
- (void)handleCVDownloadOverTime;
- (void)downloadCustomVoteResourceIfNeed:(id)arg1;
- (_Bool)isNeedDownloadCustomVote:(id)arg1;
- (void)onStartVideoChatNotification:(id)arg1;
- (void)receivedDownloadFailedNotification:(id)arg1;
- (void)checkRecZanHint;
- (void)checkHintForZanButton:(id)arg1;
- (void)dealloc;
- (void)VCWillDisappear:(id)arg1;
- (void)doZanLoveAnimation:(int)arg1 index:(int)arg2;
- (void)playZanLoveAnimationForMaster;
- (void)playZanLoveAnimtaionForPay;
- (void)playZanLoveAnimtaionForGuest;
- (void)prepareZanLoveAnimtaion:(int)arg1;
- (void)nearbyZanAction:(_Bool)arg1;
- (void)showNearbyZanLimitAlert:(id)arg1 tag:(long long)arg2;
- (void)onZanButtonClick:(id)arg1;
- (void)loadZanButton;
- (void)reloadPayZanButton;
- (void)reloadZanButton;
- (void)onPlayClick:(id)arg1;
- (void)reloadPlayButtonWithZanBtn:(id)arg1 photoActionBtn:(id)arg2;
- (void)loadPlayButtonWithZanRect:(struct CGRect)arg1;
- (void)photoActionViewTrigger:(id)arg1;
- (void)reloadPhotoActionView;
- (void)loadPhotoActionView;
- (void)setHiddenPlaceholderView:(_Bool)arg1;
- (void)scrollToLastCollectionView;
- (void)longPressGesture:(id)arg1;
- (void)longPressGestureEndWithPoint:(struct CGPoint)arg1;
- (void)longPressGestureChangedWithPoint:(struct CGPoint)arg1;
- (void)longPressGestureBeganWithPoint:(struct CGPoint)arg1;
- (void)waitingViewDidStopLoading:(id)arg1;
- (void)waitingViewDidStartLoading:(id)arg1;
- (void)bringTestingCellToFront;
- (void)deleteItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)moveHitTestingCell:(id)arg1 toIndex:(long long)arg2;
- (void)smallPhotoToBig:(id)arg1;
- (void)bigPhotoToSmall;
- (void)setHeadPhoto:(id)arg1;
- (id)hitTestCell:(struct CGPoint)arg1 withoutCell:(id)arg2;
- (void)removeAlbumTipsView;
- (void)albumTap:(id)arg1;
- (void)addAlbumTipsView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showExchangeVideoAlertIfNeeded:(id)arg1;
- (void)clickBigPhoto:(id)arg1;
- (id)getCustomHeadAreaView;
- (id)getBigPhotoAreaView;
- (id)getPhotoScrollAreaView;
- (void)layoutSubviews;
@property(nonatomic) __weak NearbyAlbumInfoComponent *albumInfoComponent; // @dynamic albumInfoComponent;
- (void)showBigCustomHead;
- (void)showBaseInfo:(_Bool)arg1;
- (void)reloadPlaceholderView;
- (void)reloadData;
- (void)reloadBaseInfo;
- (void)showLoading;
- (void)showBigPhotoHeadView;
- (void)reloadBigPhotoArea;
@property(nonatomic) double offset; // @dynamic offset;
- (void)setPhotoWallView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak NearbyUserSummaryViewController *parentViewController; // @dynamic parentViewController;
@property(readonly) Class superclass;
@property(retain, nonatomic) UserSummaryZanButton *zanButton; // @dynamic zanButton;

@end
