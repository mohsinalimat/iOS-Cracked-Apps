//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CNLogisticAdItem;

@interface CNPromotionView : UIView
{
    CNLogisticAdItem *_adItem;
}

+ (_Bool)showViewWithItem:(id)arg1;
@property(retain, nonatomic) CNLogisticAdItem *adItem; // @synthesize adItem=_adItem;
- (void).cxx_destruct;
- (void)gotoBannerLink;
- (_Bool)showView;
- (double)getHeight;
- (id)initWithY:(float)arg1 adItem:(id)arg2;

@end
