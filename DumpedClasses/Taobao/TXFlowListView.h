//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UILabel;

@interface TXFlowListView : UIView
{
    long long _tableType;
    NSArray *_specialFlowModels;
    NSArray *_commonFlowModels;
    UILabel *_topSeperatedLine;
    NSMutableArray *_flowItemViewArray;
}

+ (id)ChaoRenDetailClicked;
+ (id)PayBtnClicked;
@property(retain, nonatomic) NSMutableArray *flowItemViewArray; // @synthesize flowItemViewArray=_flowItemViewArray;
@property(retain, nonatomic) UILabel *topSeperatedLine; // @synthesize topSeperatedLine=_topSeperatedLine;
@property(retain, nonatomic) NSArray *commonFlowModels; // @synthesize commonFlowModels=_commonFlowModels;
@property(retain, nonatomic) NSArray *specialFlowModels; // @synthesize specialFlowModels=_specialFlowModels;
@property(nonatomic) long long tableType; // @synthesize tableType=_tableType;
- (void).cxx_destruct;
- (void)handleUpUISignal_TXSpecialFlowItemView:(id)arg1;
- (void)handleUpUISignal_TXCommonFlowItemView:(id)arg1;
- (void)setThemeSkin:(_Bool)arg1;
- (void)reloadData;
- (void)updateUI;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *ChaoRenDetailClicked; // @dynamic ChaoRenDetailClicked;
@property(readonly, nonatomic) NSString *PayBtnClicked; // @dynamic PayBtnClicked;

@end
