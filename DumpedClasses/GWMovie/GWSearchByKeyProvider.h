//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWPagingProvider.h"

@class NSString;

@interface GWSearchByKeyProvider : GWPagingProvider
{
    _Bool _showMore;
    _Bool _isDramaSearch;
    NSString *_word;
    NSString *_searchType;
    long long _currentMovieSearchType;
}

@property(nonatomic) _Bool isDramaSearch; // @synthesize isDramaSearch=_isDramaSearch;
@property(nonatomic) long long currentMovieSearchType; // @synthesize currentMovieSearchType=_currentMovieSearchType;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (void)convertToDramaProvider;
- (long long)calcDistanceWithTheatre:(id)arg1;
- (long long)calcDistanceWithCinema:(id)arg1;
- (void)requestWithSearchReaultHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

