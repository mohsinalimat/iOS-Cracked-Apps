//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock, NSTimer;

@interface QQWifiAvatarManager : NSObject
{
    _Bool _runningTask;
    NSTimer *_timer;
    NSMutableArray *_taskQue;
    NSRecursiveLock *_taskLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *taskLock; // @synthesize taskLock=_taskLock;
@property(retain, nonatomic) NSMutableArray *taskQue; // @synthesize taskQue=_taskQue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property _Bool runningTask; // @synthesize runningTask=_runningTask;
- (void)postTaskCompletion:(CDUnknownBlockType)arg1 success:(_Bool)arg2 data:(id)arg3 ssid:(id)arg4 url:(id)arg5;
- (void)onDownloadComplete:(id)arg1 response:(id)arg2;
- (void)onDownloadFailed:(id)arg1 error:(id)arg2;
- (void)scheduleTask;
- (void)onTimer;
- (void)invalidTimer;
- (void)startTimer;
- (id)taskWithUrl:(id)arg1 ssid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)queryTask:(id)arg1;
- (_Bool)delTask:(id)arg1;
- (_Bool)addTask:(id)arg1;
- (void)requestAvatar:(id)arg1 url:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)queryAvatar:(id)arg1 url:(id)arg2;
- (void)dealloc;
- (id)init;

@end

