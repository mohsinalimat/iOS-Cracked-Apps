//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class DCDotLoadingView, DCNewTimePickerCardViewModel, DCRichLabel, DCTimePickerCardTopView, DCTimePickerV2;

@interface DCNewTimePickerCard : DCEmergeCustomBaseView
{
    DCNewTimePickerCardViewModel *_viewMod;
    DCRichLabel *_descLabel;
    DCTimePickerV2 *_timePicker;
    DCDotLoadingView *_loadingView;
    DCTimePickerCardTopView *_topView;
}

@property(retain, nonatomic) DCTimePickerCardTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) DCDotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) DCTimePickerV2 *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) DCRichLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) DCNewTimePickerCardViewModel *viewMod; // @synthesize viewMod=_viewMod;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)showLoadingError:(id)arg1;
- (void)showLoading;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setIconImage:(id)arg1;
- (void)_setupDesc;
- (void)_setupHeader;
- (void)_setupTimePicker;
- (void)_setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

