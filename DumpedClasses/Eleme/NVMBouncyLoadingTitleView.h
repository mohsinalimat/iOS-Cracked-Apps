//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NVMBouncyLoadingView, UIImageView, UILabel;

@interface NVMBouncyLoadingTitleView : UIView
{
    NSString *_title;
    NVMBouncyLoadingView *_loadingView;
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NVMBouncyLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setupSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithPreferredFrame;

@end

