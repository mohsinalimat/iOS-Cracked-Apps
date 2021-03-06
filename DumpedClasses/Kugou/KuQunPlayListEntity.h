//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface KuQunPlayListEntity : NSObject
{
    int _quantity;
    int _play_progress;
    int _switch_time;
    int _groupid;
    NSArray *_arSongs;
    NSString *_current_song;
    unsigned long long _playMode;
}

@property(nonatomic) unsigned long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) int groupid; // @synthesize groupid=_groupid;
@property(nonatomic) int switch_time; // @synthesize switch_time=_switch_time;
@property(nonatomic) int play_progress; // @synthesize play_progress=_play_progress;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *current_song; // @synthesize current_song=_current_song;
@property(retain, nonatomic) NSArray *arSongs; // @synthesize arSongs=_arSongs;
- (void).cxx_destruct;

@end

