//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMMVChoiceFilterViewDelegate.h"
#import "NMMVChoiceViewCellDelegate.h"
#import "NMMVChoiceViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCSearchDisplayController, NMGetBatchRequest, NMMVChoiceFilterView, NMMVChoiceSearchViewController, NMMenuUpSide, NSMutableArray, NSString, UIView;

@interface NMMVChoiceViewController : UIViewController <NMHttpRequestDelegate, UITableViewDataSource, UITableViewDelegate, NMMVChoiceViewDelegate, NMMVChoiceFilterViewDelegate, NMMVChoiceViewCellDelegate>
{
    UIViewController *_mvChannleViewController;
    MCSearchDisplayController *_searchDisplayController;
    NMMVChoiceSearchViewController *_searchViewController;
    NMMVChoiceFilterView *_choiceFilterView;
    UIView *_choiceFilterDimmButton;
    NMMenuUpSide *_menu;
    NMGetBatchRequest *_contentBatchRequest;
    NSMutableArray *_tagArray;
    NSMutableArray *_mvChoiceArray;
    _Bool _isLoading;
    id <NMMVChoiceViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <NMMVChoiceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)cellMVsForIndexPath:(id)arg1;
- (void)mvCell:(id)arg1 mvClicked:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)mvChoiceFilterView:(id)arg1 completedFilterWithInfo:(id)arg2 selectedTagArray:(id)arg3;
- (void)hideFilterViewAnimated:(_Bool)arg1;
- (void)hideFilterView;
- (void)showFilterView;
- (void)mvChoiceViewFilterButtonTouched:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)sendMVRequest;
- (void)showLoadFailedWarning;
- (void)loadData;
- (void)cleanData;
- (void)presented;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)tableView;
- (id)mvChoiceView;
- (void)loadView;
- (void)dealloc;
- (id)initWithMVChannleViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

