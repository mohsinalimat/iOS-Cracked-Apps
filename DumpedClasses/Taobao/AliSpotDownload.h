//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliSpotEnv, NSMutableDictionary;

@interface AliSpotDownload : NSObject
{
    AliSpotEnv *_spotEnv;
    NSMutableDictionary *_tasks;
}

@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) __weak AliSpotEnv *spotEnv; // @synthesize spotEnv=_spotEnv;
- (void).cxx_destruct;
- (void)downloadIcon:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)addTask:(id)arg1 finishHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)networkStatusChange:(id)arg1;
- (void)unregisterNetworkChangeNotification;
- (void)registerNetworkChangeNotification;

@end
