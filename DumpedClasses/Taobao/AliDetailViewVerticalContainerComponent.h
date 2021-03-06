//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailViewVerticalContainerModel, NSMutableArray, UILabel;

@interface AliDetailViewVerticalContainerComponent : AliDetailComponent
{
    AliDetailViewVerticalContainerModel *_containerModel;
    NSMutableArray *_childComponentModels;
    UILabel *_icon;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) UILabel *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSMutableArray *childComponentModels; // @synthesize childComponentModels=_childComponentModels;
@property(retain, nonatomic) AliDetailViewVerticalContainerModel *containerModel; // @synthesize containerModel=_containerModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)componentActionClicked:(id)arg1;
- (void)addDefaultEventForView:(id)arg1 data:(id)arg2;
- (void)setObject:(id)arg1;

@end

