//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBTradeRecmdQueryRequest : NSObject
{
    NSString *_sourceChannel;
    unsigned long long _pageSize;
    unsigned long long _currentPage;
    NSDictionary *_param;
}

@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (void).cxx_destruct;
- (id)initWithSourceChannel:(id)arg1 param:(id)arg2;

@end

