//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface TRCurrentPositionView : UIButton
{
    UIImageView *_iconView;
    UIImageView *_iconArrowView;
    UILabel *_displayNameLabel;
}

@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *iconArrowView; // @synthesize iconArrowView=_iconArrowView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)makeConstrains;
- (id)initWithFrame:(struct CGRect)arg1;

@end
