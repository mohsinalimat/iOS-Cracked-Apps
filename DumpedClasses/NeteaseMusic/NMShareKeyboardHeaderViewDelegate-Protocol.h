//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMShareKeyboardHeaderView;

@protocol NMShareKeyboardHeaderViewDelegate <NSObject>
- (void)shareKeyboardHeaderView:(NMShareKeyboardHeaderView *)arg1 hideKeyBoardClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(NMShareKeyboardHeaderView *)arg1 keyboardButtonClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(NMShareKeyboardHeaderView *)arg1 emontionButtonClicked:(id)arg2;

@optional
- (void)shareKeyboardHeaderView:(NMShareKeyboardHeaderView *)arg1 topicButtonClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(NMShareKeyboardHeaderView *)arg1 picButtonClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(NMShareKeyboardHeaderView *)arg1 atButtonClicked:(id)arg2;
@end
