//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface BLYLogicManager : NSObject
{
    NSOperationQueue *_queue;
    unsigned long long _count;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)executeEmergencyLogic:(id)arg1;
- (void)addLogic:(id)arg1;
@property unsigned long long count; // @synthesize count=_count;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;

@end
