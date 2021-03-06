//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "KTVAccompanyClassifyHeaderDelegate.h"
#import "KTVAccompanyClassifyListViewDelegate.h"

@class KTVAccompanyClassifyHeader, NSString;

@interface KTVAccompanyClassifyView : UIScrollView <KTVAccompanyClassifyHeaderDelegate, KTVAccompanyClassifyListViewDelegate>
{
    id <KTVAccompanyClassifyViewDelegate> _eventDelegate;
    KTVAccompanyClassifyHeader *_headerView;
}

@property(retain, nonatomic) KTVAccompanyClassifyHeader *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <KTVAccompanyClassifyViewDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void).cxx_destruct;
- (void)listViewClickedBtnWithTagId:(long long)arg1;
- (void)headerClickedBtnWithTagId:(long long)arg1;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

