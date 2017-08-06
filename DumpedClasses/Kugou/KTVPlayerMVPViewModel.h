//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVCompetitionNetHelper, KTVCompetitionRankNetHelper, KTVCompetitorInfo, NSDateFormatter, NSMutableArray, NSString;

@interface KTVPlayerMVPViewModel : KFViewModelObject
{
    _Bool _isHistory;
    _Bool _isAcceptRequesting;
    _Bool _isAcceptRank;
    int _hasPreMonth;
    int _hasNextMonth;
    int _pageNo;
    CDUnknownBlockType _showPlayerBlock;
    NSString *_title;
    NSString *_otherTitle;
    NSMutableArray *_playerMvpList;
    KTVCompetitionRankNetHelper *_netHelper;
    KTVCompetitionNetHelper *_competitionNetHelper;
    NSString *_preDateStr;
    NSString *_curDateStr;
    KTVCompetitorInfo *_competitorInfo;
    long long _playerId;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(retain, nonatomic) KTVCompetitorInfo *competitorInfo; // @synthesize competitorInfo=_competitorInfo;
@property(retain, nonatomic) NSString *curDateStr; // @synthesize curDateStr=_curDateStr;
@property(retain, nonatomic) NSString *preDateStr; // @synthesize preDateStr=_preDateStr;
@property(nonatomic) _Bool isAcceptRank; // @synthesize isAcceptRank=_isAcceptRank;
@property(nonatomic) _Bool isAcceptRequesting; // @synthesize isAcceptRequesting=_isAcceptRequesting;
@property(retain, nonatomic) KTVCompetitionNetHelper *competitionNetHelper; // @synthesize competitionNetHelper=_competitionNetHelper;
@property(retain, nonatomic) KTVCompetitionRankNetHelper *netHelper; // @synthesize netHelper=_netHelper;
@property(retain, nonatomic) NSMutableArray *playerMvpList; // @synthesize playerMvpList=_playerMvpList;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) int hasNextMonth; // @synthesize hasNextMonth=_hasNextMonth;
@property(nonatomic) int hasPreMonth; // @synthesize hasPreMonth=_hasPreMonth;
@property(retain, nonatomic) NSString *otherTitle; // @synthesize otherTitle=_otherTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(copy, nonatomic) CDUnknownBlockType showPlayerBlock; // @synthesize showPlayerBlock=_showPlayerBlock;
- (void).cxx_destruct;
- (void)configTitle;
- (id)getNextOrPreMonth:(long long)arg1 date:(id)arg2;
- (void)congfigHistoryViewTouchUpByIndex:(long long)arg1;
- (id)playerRankInfo;
- (id)playerMVPInfoAtIndex:(long long)arg1;
- (long long)numberOfPlayerMVP;
- (void)loadMore;
- (void)requestPlayerRank;
- (_Bool)shouldUpdatePlayerRank;
- (void)updatePlayerRank;
- (void)congfigWithMonthDate:(id)arg1;
- (void)update;
- (id)init;

@end
