//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class DCTitleCutView, NSMutableArray, RACSubject;

@interface DCConfirmInfoView : DCEmergeCustomBaseView
{
    RACSubject *_eventSubject;
    NSMutableArray *_viewsArray;
    DCTitleCutView *_bottomView;
}

@property(retain, nonatomic) DCTitleCutView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSMutableArray *viewsArray; // @synthesize viewsArray=_viewsArray;
@property(retain, nonatomic) RACSubject *eventSubject; // @synthesize eventSubject=_eventSubject;
- (void).cxx_destruct;
- (void)preCalculateCost:(long long)arg1;
- (id)createCostView:(id)arg1 lastView:(id)arg2;
- (id)createSelectCarView:(id)arg1 lastView:(id)arg2;
- (id)createRouteView:(id)arg1 lastView:(id)arg2;
- (id)createConditionView:(id)arg1 lastView:(id)arg2;
- (id)createTipsView:(id)arg1 lastView:(id)arg2;
- (void)selectCarAction:(id)arg1;
- (CDUnknownBlockType)bottomTipsEqual;
- (CDUnknownBlockType)costPriceEqual;
- (CDUnknownBlockType)showPriceEqual;
- (CDUnknownBlockType)carListEqual;
- (CDUnknownBlockType)routeEqual;
- (CDUnknownBlockType)tipsEqual;
- (CDUnknownBlockType)conditionsEqual;
- (id)searchDesignatedView:(Class)arg1 withTag:(long long)arg2;
- (CDUnknownBlockType)dataConfigEqual;
- (id)remakeAutoLayout:(id)arg1 lastView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
