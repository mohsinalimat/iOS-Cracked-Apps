//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, QLJCEONAAppList, UICollectionView, UIView;

@interface QLDetailApplistViewCell : QLBaseTabelViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    UICollectionView *_collectionView;
    QLJCEONAAppList *_onaAppList;
    NSMutableArray *_aryReportCellIndexes;
    UIView *_bottomGrayGapView;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UIView *bottomGrayGapView; // @synthesize bottomGrayGapView=_bottomGrayGapView;
@property(retain, nonatomic) NSMutableArray *aryReportCellIndexes; // @synthesize aryReportCellIndexes=_aryReportCellIndexes;
@property(retain, nonatomic) QLJCEONAAppList *onaAppList; // @synthesize onaAppList=_onaAppList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)reportShowUp;
- (_Bool)isCellNewlyExpourse:(id)arg1;
- (void)reportCellItems:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)horizontalScrollView;
- (void)startLoadModel;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
