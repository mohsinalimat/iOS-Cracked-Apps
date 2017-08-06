//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

@interface FAImageClipView : UIView
{
    CDUnknownBlockType _didImageClippedHandler;
    UIImage *_img;
    UIView *_clipRectView;
    UIView *_topShadowView;
    UIView *_bottomShadowView;
    UIView *_clipBgView;
    UIImageView *_imgView;
    UIView *_gestureView;
    struct CGRect _imgOriginRect;
}

@property(nonatomic) struct CGRect imgOriginRect; // @synthesize imgOriginRect=_imgOriginRect;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UIView *clipBgView; // @synthesize clipBgView=_clipBgView;
@property(retain, nonatomic) UIView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) UIView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(retain, nonatomic) UIView *clipRectView; // @synthesize clipRectView=_clipRectView;
@property(retain, nonatomic) UIImage *img; // @synthesize img=_img;
@property(copy, nonatomic) CDUnknownBlockType didImageClippedHandler; // @synthesize didImageClippedHandler=_didImageClippedHandler;
- (void).cxx_destruct;
- (id)clip;
- (void)sureBtnClick:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)initViews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
