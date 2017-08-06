//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, WDTipsStructModel;

@interface WDInMessageInviteListViewModel : NSObject
{
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParameter;
    NSArray *_tableModelArray;
    WDTipsStructModel *_tips;
    NSNumber *_hasMore;
    unsigned long long _offset;
}

+ (id)questionEntitiesWithInviteModels:(id)arg1;
+ (void)ignoreQuestionWithQid:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)refreshDataWithOffset:(unsigned long long)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) WDTipsStructModel *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSArray *tableModelArray; // @synthesize tableModelArray=_tableModelArray;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
- (void).cxx_destruct;
- (unsigned long long)indexOfQuestionEntity:(id)arg1;
- (void)deleteDataWithQid:(id)arg1;
- (void)ignoreQuestionWithQid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithGdExtJson:(id)arg1 apiParameter:(id)arg2;

@end
