//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class NSDictionary, TBSNSShopTimeLineItem, UIImage, UIImageView;

@interface TBSNSImageLayerViewController : TBViewController
{
    _Bool _isHideRouteAnimate;
    _Bool _isSpiritEgg;
    UIImage *_backgroundImg;
    UIImageView *_background;
    NSDictionary *_UTparams;
    TBSNSShopTimeLineItem *_timeLineItem;
    long long _index;
    CDUnknownBlockType _actionHandler;
    id <TBSNSILPhotoBrowserDelegate> _delegate;
}

+ (_Bool)tbNeedNavibar;
@property(nonatomic) __weak id <TBSNSILPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSpiritEgg; // @synthesize isSpiritEgg=_isSpiritEgg;
@property(nonatomic) _Bool isHideRouteAnimate; // @synthesize isHideRouteAnimate=_isHideRouteAnimate;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) TBSNSShopTimeLineItem *timeLineItem; // @synthesize timeLineItem=_timeLineItem;
@property(retain, nonatomic) NSDictionary *UTparams; // @synthesize UTparams=_UTparams;
@property(retain, nonatomic) UIImageView *background; // @synthesize background=_background;
@property(retain, nonatomic) UIImage *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updatePageUTParamFromTimeLine;
- (void)didReceiveMemoryWarning;
- (void)setUpView;
- (void)viewDidLoad;
- (_Bool)forbidbackPanGestureRecognized;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithTimeLineItem:(id)arg1 index:(long long)arg2 UTParams:(id)arg3 delegate:(id)arg4 isHideRouteAnimate:(_Bool)arg5 isSpiritEgg:(_Bool)arg6 bounceTipHandler:(CDUnknownBlockType)arg7;

@end

