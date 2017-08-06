//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSString<Optional>, TTVisitorDataModel<Optional>;

@interface TTVisitorModel : TTResponseModel
{
    NSString<Optional> *_message;
    TTVisitorDataModel<Optional> *_data;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) TTVisitorDataModel<Optional> *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)isSameDayOfObj1:(id)arg1 obj2:(id)arg2;
- (id)toFormattedModelForNearestNDays:(unsigned long long)arg1;
- (id)toFormattedModel;
- (_Bool)isHistoryEmpty;
- (_Bool)isRecentEmpty;
- (_Bool)isRecentAnonymousEmpty;
- (id)cursor;
- (_Bool)hasMore;
- (long long)countOfNearest7Day;
- (long long)recentTotalCount;
- (long long)totalCount;
- (long long)listCount;
- (long long)anonymousTotalCount;
- (void)appendVisitorModel:(id)arg1;
- (id)init;

@end
