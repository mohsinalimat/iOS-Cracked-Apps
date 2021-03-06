//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface MYPromotionTimerManager : NSObject
{
    NSTimer *_timer;
    NSMutableArray *_unStartConfigs;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *unStartConfigs; // @synthesize unStartConfigs=_unStartConfigs;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)fireTimer;
- (void)startTimer;
- (void)stopTimerAndCleanConfigs;
- (void)startTimerForConfigs:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)registerObserver;

@end

