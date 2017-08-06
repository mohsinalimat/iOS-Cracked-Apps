//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, DCFilterSelectItemView, DCFilterViewItem, UIColor;

@interface DCFilterSelectView : UIView
{
    _Bool _highlightEnable;
    CDUnknownBlockType _routeTappedBlock;
    CDUnknownBlockType _roleTappedBlock;
    UIColor *_highlightColor;
    UIColor *_defaultColor;
    DCFilterViewItem *_routeFilter;
    DCFilterViewItem *_roleFilter;
    CALayer *_lineLayer;
    CALayer *_bottomLineLayer;
    CALayer *_topLineLayer;
    DCFilterSelectItemView *_routeFilterItem;
    DCFilterSelectItemView *_roleFilterItem;
}

@property(retain, nonatomic) DCFilterSelectItemView *roleFilterItem; // @synthesize roleFilterItem=_roleFilterItem;
@property(retain, nonatomic) DCFilterSelectItemView *routeFilterItem; // @synthesize routeFilterItem=_routeFilterItem;
@property(retain, nonatomic) CALayer *topLineLayer; // @synthesize topLineLayer=_topLineLayer;
@property(retain, nonatomic) CALayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) DCFilterViewItem *roleFilter; // @synthesize roleFilter=_roleFilter;
@property(retain, nonatomic) DCFilterViewItem *routeFilter; // @synthesize routeFilter=_routeFilter;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(copy, nonatomic) CDUnknownBlockType roleTappedBlock; // @synthesize roleTappedBlock=_roleTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType routeTappedBlock; // @synthesize routeTappedBlock=_routeTappedBlock;
@property(nonatomic) _Bool highlightEnable; // @synthesize highlightEnable=_highlightEnable;
- (void).cxx_destruct;
- (void)roleTapped;
- (void)routeTapped;
- (void)setRoleSelected:(_Bool)arg1;
- (void)setRouteSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
