//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "HTSVideoCommentCellOperateDelegate.h"
#import "HTSVideoDetailTopViewDelegate.h"
#import "HTSVideoPlayGrowingTextViewDelegate.h"
#import "HTSVideoPlayReportReasonViewControllerDelegate.h"
#import "HTSVideoPlayViewDelegate.h"
#import "TTRouteInitializeProtocol.h"
#import "TTRouteLogicDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HTSVideoABActionModel, HTSVideoCommentDataManager, HTSVideoCommentInputBar, HTSVideoDetailTopView, HTSVideoItemModel, HTSVideoPlayAlertABActionModel, HTSVideoPlayReportReasonViewController, HTSVideoPlayView, NSDictionary, NSLock, NSMutableArray, NSString, NSURLSessionDownloadTask, SSThemedLabel, SSThemedView, UIPanGestureRecognizer, UITableView, UIView;

@interface HTSVideoDetailViewController : SSViewControllerBase <UITableViewDataSource, UITableViewDelegate, HTSVideoPlayGrowingTextViewDelegate, UIGestureRecognizerDelegate, HTSVideoDetailTopViewDelegate, HTSVideoPlayViewDelegate, HTSVideoCommentCellOperateDelegate, TTRouteInitializeProtocol, HTSVideoPlayReportReasonViewControllerDelegate, TTRouteLogicDelegate>
{
    _Bool _isWaitingPlay;
    _Bool _isLoadingVideoModel;
    _Bool _isVideoDeleted;
    _Bool _isFirstTimeShowCommentList;
    _Bool _isCommentViewAnimating;
    _Bool _isCommentViewDragEnabled;
    _Bool _isViewDragEnabled;
    _Bool _isViewCloseDraging;
    _Bool _isDisliked;
    _Bool _isFirstTimePlay;
    _Bool _wifiAlertShowing;
    UITableView *_tableView;
    SSThemedView *_commentView;
    HTSVideoItemModel *_model;
    id <HTSVideoStartPreFecthDelegate> _delegate;
    HTSVideoDetailTopView *_topBar;
    SSThemedLabel *_commentHeaderLabel;
    SSThemedView *_fakeBGBlanckCoverView;
    UIView *_closePanMaskView;
    HTSVideoPlayView *_videoPlayView;
    UIView *_emptyHintView;
    HTSVideoCommentInputBar *_inputBar;
    UIView *_keyboardMaskView;
    UIView *_commentViewMaskView;
    UIView *_indicatorMaskView;
    HTSVideoPlayReportReasonViewController *_commentReportVC;
    HTSVideoPlayReportReasonViewController *_videoReportVC;
    HTSVideoCommentDataManager *_commentManager;
    NSDictionary *_pageParams;
    NSURLSessionDownloadTask *_downloadTask;
    NSDictionary *_transitionParams;
    UIView *_fakeTransitionTopView;
    UIView *_fakeTransitionBottomView;
    NSString *_requestID;
    NSString *_pageSource;
    NSString *_enterFrom;
    NSString *_cardID;
    NSString *_categoryName;
    NSString *_cardPosition;
    NSString *_groupSource;
    NSString *_videoID;
    NSString *_userID;
    NSString *_groupID;
    unsigned long long _closeStyle;
    double _totalDuration;
    NSString *_itemID;
    HTSVideoABActionModel *_abModel;
    HTSVideoPlayAlertABActionModel *_alertABModel;
    NSLock *_diggLock;
    NSLock *_commentDiggLock;
    NSMutableArray *_observerArray;
    UIPanGestureRecognizer *_commentPan;
    UIPanGestureRecognizer *_closePan;
    struct CGRect _targetCloseFrame;
}

+ (void)load;
@property(retain, nonatomic) UIPanGestureRecognizer *closePan; // @synthesize closePan=_closePan;
@property(retain, nonatomic) UIPanGestureRecognizer *commentPan; // @synthesize commentPan=_commentPan;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) NSLock *commentDiggLock; // @synthesize commentDiggLock=_commentDiggLock;
@property(retain, nonatomic) NSLock *diggLock; // @synthesize diggLock=_diggLock;
@property(retain, nonatomic) HTSVideoPlayAlertABActionModel *alertABModel; // @synthesize alertABModel=_alertABModel;
@property(retain, nonatomic) HTSVideoABActionModel *abModel; // @synthesize abModel=_abModel;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) _Bool wifiAlertShowing; // @synthesize wifiAlertShowing=_wifiAlertShowing;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) _Bool isFirstTimePlay; // @synthesize isFirstTimePlay=_isFirstTimePlay;
@property(nonatomic) unsigned long long closeStyle; // @synthesize closeStyle=_closeStyle;
@property(nonatomic) _Bool isDisliked; // @synthesize isDisliked=_isDisliked;
@property(nonatomic) _Bool isViewCloseDraging; // @synthesize isViewCloseDraging=_isViewCloseDraging;
@property(nonatomic) _Bool isViewDragEnabled; // @synthesize isViewDragEnabled=_isViewDragEnabled;
@property(nonatomic) _Bool isCommentViewDragEnabled; // @synthesize isCommentViewDragEnabled=_isCommentViewDragEnabled;
@property(nonatomic) _Bool isCommentViewAnimating; // @synthesize isCommentViewAnimating=_isCommentViewAnimating;
@property(nonatomic) _Bool isFirstTimeShowCommentList; // @synthesize isFirstTimeShowCommentList=_isFirstTimeShowCommentList;
@property(nonatomic) _Bool isVideoDeleted; // @synthesize isVideoDeleted=_isVideoDeleted;
@property(nonatomic) _Bool isLoadingVideoModel; // @synthesize isLoadingVideoModel=_isLoadingVideoModel;
@property(nonatomic) _Bool isWaitingPlay; // @synthesize isWaitingPlay=_isWaitingPlay;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(copy, nonatomic) NSString *groupSource; // @synthesize groupSource=_groupSource;
@property(copy, nonatomic) NSString *cardPosition; // @synthesize cardPosition=_cardPosition;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *pageSource; // @synthesize pageSource=_pageSource;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) struct CGRect targetCloseFrame; // @synthesize targetCloseFrame=_targetCloseFrame;
@property(retain, nonatomic) UIView *fakeTransitionBottomView; // @synthesize fakeTransitionBottomView=_fakeTransitionBottomView;
@property(retain, nonatomic) UIView *fakeTransitionTopView; // @synthesize fakeTransitionTopView=_fakeTransitionTopView;
@property(copy, nonatomic) NSDictionary *transitionParams; // @synthesize transitionParams=_transitionParams;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(copy, nonatomic) NSDictionary *pageParams; // @synthesize pageParams=_pageParams;
@property(retain, nonatomic) HTSVideoCommentDataManager *commentManager; // @synthesize commentManager=_commentManager;
@property(retain, nonatomic) HTSVideoPlayReportReasonViewController *videoReportVC; // @synthesize videoReportVC=_videoReportVC;
@property(retain, nonatomic) HTSVideoPlayReportReasonViewController *commentReportVC; // @synthesize commentReportVC=_commentReportVC;
@property(retain, nonatomic) UIView *indicatorMaskView; // @synthesize indicatorMaskView=_indicatorMaskView;
@property(retain, nonatomic) UIView *commentViewMaskView; // @synthesize commentViewMaskView=_commentViewMaskView;
@property(retain, nonatomic) UIView *keyboardMaskView; // @synthesize keyboardMaskView=_keyboardMaskView;
@property(retain, nonatomic) HTSVideoCommentInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) UIView *emptyHintView; // @synthesize emptyHintView=_emptyHintView;
@property(retain, nonatomic) HTSVideoPlayView *videoPlayView; // @synthesize videoPlayView=_videoPlayView;
@property(retain, nonatomic) UIView *closePanMaskView; // @synthesize closePanMaskView=_closePanMaskView;
@property(retain, nonatomic) SSThemedView *fakeBGBlanckCoverView; // @synthesize fakeBGBlanckCoverView=_fakeBGBlanckCoverView;
@property(retain, nonatomic) SSThemedLabel *commentHeaderLabel; // @synthesize commentHeaderLabel=_commentHeaderLabel;
@property(retain, nonatomic) HTSVideoDetailTopView *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak id <HTSVideoStartPreFecthDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HTSVideoItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SSThemedView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)checkABAlert;
- (void)_ABActionWithTitle:(id)arg1 confirm:(id)arg2 cancel:(id)arg3 source:(id)arg4 downloadUrl:(id)arg5;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)reportReasonViewController:(id)arg1 didReportReason:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)commentCell:(id)arg1 didClickUserNameWithModel:(id)arg2;
- (void)commentCell:(id)arg1 didClickUserWithModel:(id)arg2;
- (void)commentCell:(id)arg1 didClickLikeWithModel:(id)arg2;
- (void)commentCell:(id)arg1 didClickReportWithModel:(id)arg2;
- (void)commentCell:(id)arg1 didClickDeleteWithModel:(id)arg2;
- (_Bool)playView:(id)arg1 shouldPlusOneAnimateDidDoubleTapWithModel:(id)arg2;
- (void)playView:(id)arg1 didSingleTapWithModel:(id)arg2;
- (void)playView:(id)arg1 didClickTipsWithModel:(id)arg2;
- (void)playView:(id)arg1 didClickMoreWithModel:(id)arg2;
- (_Bool)playView:(id)arg1 shouldPlusOneAnimateDidClickLikeWithModel:(id)arg2;
- (void)playView:(id)arg1 didClickCommentWithModel:(id)arg2;
- (void)playView:(id)arg1 didClickInputWithModel:(id)arg2;
- (void)playView:(id)arg1 didStopPlayWithModel:(id)arg2 duration:(double)arg3;
- (void)playView:(id)arg1 didPausePlayWithModel:(id)arg2 duration:(double)arg3;
- (void)playView:(id)arg1 didStartPlayWithModel:(id)arg2;
- (void)playView:(id)arg1 willStartPlayWithModel:(id)arg2;
- (void)topView:(id)arg1 didClickReportWithModel:(id)arg2;
- (void)topView:(id)arg1 didClickFollowWithModel:(id)arg2;
- (void)topView:(id)arg1 didClickUserNameWithModel:(id)arg2;
- (void)topView:(id)arg1 didClickAvatarWithModel:(id)arg2;
- (void)topView:(id)arg1 didClickCloseWithModel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleFakeInputBarClick:(id)arg1;
- (void)handleClosePan:(id)arg1;
- (void)handleCommentViewPan:(id)arg1;
- (void)handleDismissCommentsList;
- (void)handleDismissKeyboard;
- (void)handleLoadMoreComments;
- (void)handleSendComment:(id)arg1 fromInputBar:(id)arg2;
- (void)handleClose:(_Bool)arg1;
- (void)handleDislikeVideo;
- (void)handleSaveVideo;
- (void)handleReportVideo;
- (void)closeCustomAnimation;
- (id)ttNaviController;
- (id)innerTransitionView;
- (void)dismissCommentsListAnimated:(_Bool)arg1;
- (void)showCommentsListWithKeyboardMinY:(double)arg1 duration:(double)arg2;
- (void)showCommentViewMaskView:(_Bool)arg1;
- (void)showKeyboardMaskView:(_Bool)arg1 inputBarTargetY:(double)arg2;
- (void)showEmptyHint:(_Bool)arg1;
- (_Bool)alertIfNotValid;
- (_Bool)alertIfCanNotComment;
- (_Bool)alertIfCanNotShare;
- (_Bool)alertIfNotLogin;
- (_Bool)alertIfNotLoginWithCompletion:(CDUnknownBlockType)arg1;
- (void)doCommentSafeDiggWithCell:(id)arg1 model:(id)arg2;
- (void)doCommentFakeDiggWithCell:(id)arg1 model:(id)arg2;
- (void)doSafeCancelDigg;
- (void)doSafeDigg;
- (void)doFakeCancelDigg;
- (void)doFakeDigg;
- (void)updateViews;
- (void)interactVideoItemWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isBeingPopOrDismissed;
- (_Bool)isShowingOnTop;
- (void)reloadVideoModeIfNeeded:(id)arg1;
- (void)reloadCommentHeader;
- (void)pause;
- (void)stop;
- (void)play;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initProperty;
- (void)initParamsWithDict:(id)arg1;
- (id)initWithBaseCondition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
