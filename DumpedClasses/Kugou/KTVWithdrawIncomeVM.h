//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVWithDrawNetHelper, NSMutableArray;

@interface KTVWithdrawIncomeVM : KFViewModelObject
{
    _Bool _isFresh;
    long long _monthKNum;
    long long _totalKNum;
    KTVWithDrawNetHelper *_httpDao;
    NSMutableArray *_myWithdrawIncomeList;
}

@property(retain, nonatomic) NSMutableArray *myWithdrawIncomeList; // @synthesize myWithdrawIncomeList=_myWithdrawIncomeList;
@property(retain, nonatomic) KTVWithDrawNetHelper *httpDao; // @synthesize httpDao=_httpDao;
@property(nonatomic) long long totalKNum; // @synthesize totalKNum=_totalKNum;
@property(nonatomic) long long monthKNum; // @synthesize monthKNum=_monthKNum;
@property(nonatomic) _Bool isFresh; // @synthesize isFresh=_isFresh;
- (void).cxx_destruct;
- (id)myWithdrawIncomeItemAtIndex:(long long)arg1;
- (void)handleLoadMoreSuccess:(id)arg1;
- (void)handleUpdateSuccess:(id)arg1;
- (long long)numberOfWithdrawIncome;
- (void)loadMore;
- (void)update;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool haveMoreData;

@end

