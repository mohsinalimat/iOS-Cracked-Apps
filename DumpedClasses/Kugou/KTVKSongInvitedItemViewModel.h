//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSString;

@interface KTVKSongInvitedItemViewModel : KTVObjectModel
{
    _Bool _isAdded;
    int _fileSize;
    NSString *_songName;
    NSString *_singerName;
    NSString *_fileSizeStr;
    long long _accompanyID;
    unsigned long long _itemType;
}

+ (id)keyMapper;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long accompanyID; // @synthesize accompanyID=_accompanyID;
@property(readonly, copy, nonatomic) NSString *fileSizeStr; // @synthesize fileSizeStr=_fileSizeStr;
@property(nonatomic) int fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
- (void).cxx_destruct;
- (id)init;

@end

