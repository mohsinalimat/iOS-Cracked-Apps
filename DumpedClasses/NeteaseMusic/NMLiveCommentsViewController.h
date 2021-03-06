//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMGroupSelectionBaseViewDelegate.h"
#import "NMLiveCommentViewDelegate.h"
#import "NMLiveGrowingInputViewDelegate.h"
#import "NMLiveVoteButtonDelegate.h"
#import "NMScrollableTableControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMGroupSelectionVerticalView, NMLive, NMLiveCommentsView, NMLiveGrowingInputView, NMScrollTableController, NMScrollableTabItem, NSMutableArray, NSString;

@interface NMLiveCommentsViewController : UIViewController <NMLiveCommentViewDelegate, UITableViewDataSource, UITableViewDelegate, NMLiveVoteButtonDelegate, NMLiveGrowingInputViewDelegate, NMGroupSelectionBaseViewDelegate, NMScrollableTableControllerProtocol>
{
    NMLive *_live;
    NMLiveCommentsView *_commentView;
    NSMutableArray *_commentsArray;
    NMGroupSelectionVerticalView *_groupSelectionView;
    NMScrollableTabItem *_scrollableItem;
    NMScrollTableController *_scrollTableController;
    id <NMLiveCommentsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMLiveCommentsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem; // @synthesize scrollableItem=_scrollableItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) NMLiveGrowingInputView *inputView;
@property(retain, nonatomic) NSString *commentDraft;
- (void)groupSelectionButtonTouched:(id)arg1;
- (void)inputViewFinishedInput:(id)arg1;
- (void)didSelectArtist:(id)arg1;
- (void)liveVoteButtonClicked:(id)arg1;
- (void)endInput;
- (void)addComment:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideGroupSelectionView;
- (void)showGroupSelectionViewWithPasser:(_Bool)arg1;
- (void)resignFirstResponderIfNeeded;
- (void)updateLiveInfo:(id)arg1;
- (void)showVoteSuccessAnimation;
- (void)freezeButtonWithAnimation:(CDUnknownBlockType)arg1;
- (void)showVoteButton:(_Bool)arg1 remainedCount:(unsigned long long)arg2;
- (void)_addNewComment:(id)arg1;
- (void)commentHasBeenSendSuccessfully:(id)arg1;
- (void)_scrollTabelViewToBottom;
- (void)updateCommentsWithLatestComments:(id)arg1;
- (void)dealloc;
- (void)cleanData;
- (void)loadDataIfNeeded;
- (void)presented;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

