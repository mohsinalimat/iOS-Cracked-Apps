//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, SLCoverFlowScrollView;

@interface SLCoverFlowView : UIView <UIScrollViewDelegate>
{
    SLCoverFlowScrollView *_scrollView;
    struct CGPoint _endDraggingVelocity;
    id <SLCoverFlowViewDataSource> _delegate;
    double _coverSpace;
    double _coverAngle;
    double _coverScale;
    long long _numberOfCoverViews;
    struct CGSize _coverSize;
}

@property(readonly, nonatomic) long long numberOfCoverViews; // @synthesize numberOfCoverViews=_numberOfCoverViews;
@property(nonatomic) double coverScale; // @synthesize coverScale=_coverScale;
@property(nonatomic) double coverAngle; // @synthesize coverAngle=_coverAngle;
@property(nonatomic) double coverSpace; // @synthesize coverSpace=_coverSpace;
@property(nonatomic) struct CGSize coverSize; // @synthesize coverSize=_coverSize;
@property(nonatomic) id <SLCoverFlowViewDataSource> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)offsetWithCenterCoverViewIndex:(long long)arg1;
- (struct CGPoint)nearByOffsetOfScrollViewContentOffset:(struct CGPoint)arg1;
- (unsigned long long)nearByIndexOfScrollViewContentOffset:(struct CGPoint)arg1;
- (void)onlyIn3VisibaleItemMaskProccess;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)centerIndex;
- (id)obtainScrollView;
- (id)rightMostVisibleCoverView;
- (id)leftMostVisibleCoverView;
- (id)visibleCoverViewWithIndex:(int)arg1;
- (void)reloadData;
@property(readonly, nonatomic) long long visibleCoverNumber;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
