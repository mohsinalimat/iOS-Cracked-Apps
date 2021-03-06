//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface DRCOrderCommonInfoView : UIView
{
    UIImageView *_fetchIconView;
    UILabel *_fetchAreaLabel;
    UILabel *_fetchTimeLabel;
    UIImageView *_returnIconView;
    UILabel *_returnAreaLabel;
    UILabel *_returnTimeLabel;
}

@property(retain, nonatomic) UILabel *returnTimeLabel; // @synthesize returnTimeLabel=_returnTimeLabel;
@property(retain, nonatomic) UILabel *returnAreaLabel; // @synthesize returnAreaLabel=_returnAreaLabel;
@property(retain, nonatomic) UIImageView *returnIconView; // @synthesize returnIconView=_returnIconView;
@property(retain, nonatomic) UILabel *fetchTimeLabel; // @synthesize fetchTimeLabel=_fetchTimeLabel;
@property(retain, nonatomic) UILabel *fetchAreaLabel; // @synthesize fetchAreaLabel=_fetchAreaLabel;
@property(retain, nonatomic) UIImageView *fetchIconView; // @synthesize fetchIconView=_fetchIconView;
- (void).cxx_destruct;
- (double)heightForTravelInfoView;
- (void)setReturnTimeText:(id)arg1;
- (void)setReturnAreaText:(id)arg1;
- (void)setFetchTimeText:(id)arg1;
- (void)setFetchAreaText:(id)arg1;
- (void)makeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

