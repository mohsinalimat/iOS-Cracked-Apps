//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSArray<TBLiveFeedVideoModel>, NSString;

@interface TBLiveFeedGroupTagModel : TBJSONModel
{
    NSString *_tagGroupName;
    NSArray *_tagList;
    NSArray<TBLiveFeedVideoModel> *_videoList;
}

@property(copy, nonatomic) NSArray<TBLiveFeedVideoModel> *videoList; // @synthesize videoList=_videoList;
@property(copy, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *tagGroupName; // @synthesize tagGroupName=_tagGroupName;
- (void).cxx_destruct;

@end

