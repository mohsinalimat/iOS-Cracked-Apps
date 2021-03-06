//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWActivity, GWBorderAndClipLabel, GWImageLabel, GWMoviePolicyImageView, UILabel;
@protocol GWActivityHeaderViewDelegate;

@interface GWActivityHeaderView : UIView
{
    GWMoviePolicyImageView *_avatarView;
    GWImageLabel *_nameAndStatusLabel;
    UILabel *_joinedLabel;
    UILabel *_startAndEndTimeLabel;
    GWBorderAndClipLabel *_feeLabel;
    GWBorderAndClipLabel *_areaLabel;
    GWBorderAndClipLabel *_placeLabel;
    UILabel *_qtyLabel;
    GWActivity *_activity;
    id <GWActivityHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GWActivityHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GWActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) __weak UILabel *qtyLabel; // @synthesize qtyLabel=_qtyLabel;
@property(nonatomic) __weak GWBorderAndClipLabel *placeLabel; // @synthesize placeLabel=_placeLabel;
@property(nonatomic) __weak GWBorderAndClipLabel *areaLabel; // @synthesize areaLabel=_areaLabel;
@property(nonatomic) __weak GWBorderAndClipLabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property(nonatomic) __weak UILabel *startAndEndTimeLabel; // @synthesize startAndEndTimeLabel=_startAndEndTimeLabel;
@property(nonatomic) __weak UILabel *joinedLabel; // @synthesize joinedLabel=_joinedLabel;
@property(nonatomic) __weak GWImageLabel *nameAndStatusLabel; // @synthesize nameAndStatusLabel=_nameAndStatusLabel;
@property(nonatomic) __weak GWMoviePolicyImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)labelClicked:(id)arg1;
- (id)addLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

