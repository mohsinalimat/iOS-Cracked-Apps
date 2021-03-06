//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFPreloadable.h"

@class DTRpcAsyncCaller, NSArray, NSMutableArray, NSMutableDictionary;

@interface TFBankPreload : TFPreloadable
{
    DTRpcAsyncCaller *_queryBankListCaller;
    _Bool _syncing;
    id <TFBankPreLoadDelegate> _delegate;
    NSMutableArray *_banks;
    NSArray *_sortedKeys;
    NSMutableDictionary *_predicatedBankDict;
}

@property(retain, nonatomic) NSMutableDictionary *predicatedBankDict; // @synthesize predicatedBankDict=_predicatedBankDict;
@property(retain, nonatomic) NSArray *sortedKeys; // @synthesize sortedKeys=_sortedKeys;
@property(retain, nonatomic) NSMutableArray *banks; // @synthesize banks=_banks;
@property(nonatomic) __weak id <TFBankPreLoadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addBankInfoToBankList:(id)arg1 withFirstChar:(id)arg2;
- (void)buildPinYinIndex:(id)arg1;
- (void)finishOnMainThread;
- (void)buildIndexAndDelegate:(id)arg1;
- (void)updateWithDelegate:(id)arg1;
- (void)cancel;
- (void)resetBanks;
- (id)init;
- (void)dealloc;

@end

