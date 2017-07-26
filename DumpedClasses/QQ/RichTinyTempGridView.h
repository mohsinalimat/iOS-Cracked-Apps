//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "MCTempManagerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MCGridVideoItem, NSMutableArray, NSString, RichTinyFlowLayout, UIView;

@interface RichTinyTempGridView : UICollectionView <MCTempManagerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    UIView *_recordResponder;
    id <RichTinyTemGridDelegate> _gridDelegate;
    long long _businessType;
    unsigned long long _source;
    NSMutableArray *_tempArray;
    MCGridVideoItem *_selectItem;
    NSMutableArray *_downloadArray;
    RichTinyFlowLayout *_flow;
}

@property(retain, nonatomic) RichTinyFlowLayout *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) NSMutableArray *downloadArray; // @synthesize downloadArray=_downloadArray;
@property(retain, nonatomic) MCGridVideoItem *selectItem; // @synthesize selectItem=_selectItem;
@property(retain, nonatomic) NSMutableArray *tempArray; // @synthesize tempArray=_tempArray;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) __weak id <RichTinyTemGridDelegate> gridDelegate; // @synthesize gridDelegate=_gridDelegate;
@property(nonatomic) __weak UIView *recordResponder; // @synthesize recordResponder=_recordResponder;
- (void).cxx_destruct;
- (void)handleSDKDownloadResult:(id)arg1;
- (void)updateDownloadSDKProgress:(id)arg1;
- (void)hiddenDownloadSDKUI;
- (void)showDownloadSDKUI;
- (void)hiddenRecordingUI;
- (void)showRecordingUI;
- (long long)resourceType;
- (void)insertGridItem:(id)arg1;
- (void)downloadResourceFail:(id)arg1;
- (void)downloadResourceFinish:(id)arg1;
- (void)updateDownloadResource:(id)arg1 progress:(double)arg2;
- (void)removeItemByID:(id)arg1;
- (void)downloadResource:(id)arg1;
- (void)selectTmplItem:(id)arg1 temState:(long long)arg2;
- (long long)getIndexFromViedoItemID:(id)arg1;
- (void)setContentXFromVideoItemIndex:(long long)arg1;
- (void)changeSelectItem;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)countOfTempArray;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andFlow:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andSource:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
