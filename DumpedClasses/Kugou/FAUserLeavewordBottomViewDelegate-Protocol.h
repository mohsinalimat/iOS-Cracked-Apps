//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FAUserLeavewordBottomViewDelegate <NSObject>

@optional
- (void)bottomClickWithMessage:(NSString *)arg1 replyName:(NSString *)arg2;
- (void)shouldDismiss;
- (void)shouldShow;
@end
