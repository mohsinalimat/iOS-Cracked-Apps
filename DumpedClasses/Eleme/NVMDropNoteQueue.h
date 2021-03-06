//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMDropNoteViewQueueProtocol.h"

@class NSMutableArray, NSString;

@interface NVMDropNoteQueue : NSObject <NVMDropNoteViewQueueProtocol>
{
    _Bool _suspend;
    NSMutableArray *_dropNoteArray;
}

+ (void)queue:(id)arg1;
+ (void)resume;
+ (void)removeTaskAndSuspend;
+ (void)finishTaskAndSuspend;
+ (id)shareQueue;
@property(nonatomic, getter=isSuspended) _Bool suspend; // @synthesize suspend=_suspend;
@property(retain, nonatomic) NSMutableArray *dropNoteArray; // @synthesize dropNoteArray=_dropNoteArray;
- (void).cxx_destruct;
- (void)didEndDisplay:(id)arg1;
- (void)queue:(id)arg1;
- (void)resume;
- (void)removeTaskAndSuspend;
- (void)finishTaskAndSuspend;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

