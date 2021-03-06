//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMEmotionViewDelegate.h"
#import "NMGrowingInputViewDelegate.h"

@class MCPullTableView, NMEmotionView, NMGrowingInputView, NMInboxTabView, NSString;

@interface NMInboxView : UIView <NMGrowingInputViewDelegate, NMEmotionViewDelegate>
{
    MCPullTableView *_tableView;
    UIView *_headView;
    NMGrowingInputView *_inputView;
    double bottomTabBarHeight;
    struct CGRect _moveToCellFrame;
    _Bool _shouldHideEmotionBoard;
    _Bool _isSendTriggered;
    _Bool _isShowingAtViewController;
    _Bool _isShowingEmotionWhenAtControllerAppeared;
    _Bool _isEnteringEmotionWhenResignFirstResponder;
    _Bool _lastKeyboardAnimationCurve;
    double _currentKeyboardHeight;
    id <NMInboxViewDelegate><UITableViewDataSource><UITableViewDelegate><MCLoadMoreTableFooterViewDelegate><MCRefreshTableHeaderViewDelegate> _delegate;
    NMInboxTabView *_inboxTabView;
    NMEmotionView *_emotionView;
}

+ (double)headerHeight;
@property(nonatomic) _Bool lastKeyboardAnimationCurve; // @synthesize lastKeyboardAnimationCurve=_lastKeyboardAnimationCurve;
@property(retain, nonatomic) NMEmotionView *emotionView; // @synthesize emotionView=_emotionView;
@property(nonatomic) _Bool isEnteringEmotionWhenResignFirstResponder; // @synthesize isEnteringEmotionWhenResignFirstResponder=_isEnteringEmotionWhenResignFirstResponder;
@property(nonatomic) _Bool isShowingEmotionWhenAtControllerAppeared; // @synthesize isShowingEmotionWhenAtControllerAppeared=_isShowingEmotionWhenAtControllerAppeared;
@property(nonatomic) _Bool isShowingAtViewController; // @synthesize isShowingAtViewController=_isShowingAtViewController;
@property(nonatomic) _Bool isSendTriggered; // @synthesize isSendTriggered=_isSendTriggered;
@property(retain, nonatomic) NMInboxTabView *inboxTabView; // @synthesize inboxTabView=_inboxTabView;
@property(nonatomic) id <NMInboxViewDelegate><UITableViewDataSource><UITableViewDelegate><MCLoadMoreTableFooterViewDelegate><MCRefreshTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MCPullTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)sendButtonTouchedInEmotionView:(id)arg1;
- (_Bool)isEmotionBoardShowing;
- (void)inputView:(id)arg1 emotionStateChangedTo:(unsigned long long)arg2;
- (void)inputViewFinishedInput:(id)arg1;
- (void)inputViewDidBeginInput:(id)arg1;
- (void)inputView:(id)arg1 heightDidChange:(double)arg2;
- (void)_atUserTriggered:(_Bool)arg1;
- (void)inputViewAtButtonTouched:(id)arg1;
- (void)inputViewAtTriggeredByInput:(id)arg1;
- (void)inputViewTopicTriggeredByInput:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)resignInputFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)atPickEnded;
- (void)_doAddSringToCurrentSelectedPlace:(id)arg1;
- (void)addTopicName:(id)arg1;
- (void)addAtUserName:(id)arg1 needAddAt:(_Bool)arg2;
- (void)setInputViewPlaceHolder:(id)arg1;
@property(nonatomic) NSString *inputViewText;
- (void)beginInputWithTouchedCellFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isShowingEmotionView;
- (void)endObserveKeyboard;
- (void)beginObserveKeyboard;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)freeMemory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

