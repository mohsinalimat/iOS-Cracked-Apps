//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBRDDefaultRateModel : TBJSONModel
{
    NSString *_allowAppend;
    NSString *_aucNumId;
    NSString *_auctionPicUrl;
    NSString *_auctionTitle;
    NSString *_auctionPrice;
    NSString *_feedId;
    NSString *_ratedUid;
    NSString *_tradeId;
    NSString *_parentTradeId;
    NSString *_userMark;
    NSString *_history;
}

@property(copy, nonatomic) NSString *history; // @synthesize history=_history;
@property(copy, nonatomic) NSString *userMark; // @synthesize userMark=_userMark;
@property(copy, nonatomic) NSString *parentTradeId; // @synthesize parentTradeId=_parentTradeId;
@property(copy, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(copy, nonatomic) NSString *ratedUid; // @synthesize ratedUid=_ratedUid;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *auctionPrice; // @synthesize auctionPrice=_auctionPrice;
@property(copy, nonatomic) NSString *auctionTitle; // @synthesize auctionTitle=_auctionTitle;
@property(copy, nonatomic) NSString *auctionPicUrl; // @synthesize auctionPicUrl=_auctionPicUrl;
@property(copy, nonatomic) NSString *aucNumId; // @synthesize aucNumId=_aucNumId;
@property(copy, nonatomic) NSString *allowAppend; // @synthesize allowAppend=_allowAppend;
- (void).cxx_destruct;

@end
