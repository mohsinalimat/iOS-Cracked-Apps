//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView;

@interface FXFollowRemindView : UIView
{
    _Bool _followState;
    NSString *_iconImageUrl;
    NSString *_nickName;
    long long _starLevel;
    long long _richLevel;
    long long _userId;
    long long _kugouId;
    long long _viewType;
    CDUnknownBlockType _followButtonHandler;
    CDUnknownBlockType _showViewHandler;
    CDUnknownBlockType _closeViewHandler;
    CDUnknownBlockType _closeViewAnimFinishHandler;
    CDUnknownBlockType _getFollowState;
    UIView *_contentView;
    UIButton *_followButton;
    UIImageView *_richImageView;
    UIImageView *_starImageView;
    UIImageView *_identityImageView;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *identityImageView; // @synthesize identityImageView=_identityImageView;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UIImageView *richImageView; // @synthesize richImageView=_richImageView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType getFollowState; // @synthesize getFollowState=_getFollowState;
@property(copy, nonatomic) CDUnknownBlockType closeViewAnimFinishHandler; // @synthesize closeViewAnimFinishHandler=_closeViewAnimFinishHandler;
@property(copy, nonatomic) CDUnknownBlockType closeViewHandler; // @synthesize closeViewHandler=_closeViewHandler;
@property(copy, nonatomic) CDUnknownBlockType showViewHandler; // @synthesize showViewHandler=_showViewHandler;
@property(copy, nonatomic) CDUnknownBlockType followButtonHandler; // @synthesize followButtonHandler=_followButtonHandler;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool followState; // @synthesize followState=_followState;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
@property(nonatomic) long long starLevel; // @synthesize starLevel=_starLevel;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
- (void).cxx_destruct;
- (void)exitView;
- (void)onFollowButtonEvent;
- (void)updateIconImageView:(id)arg1;
- (void)updateStarImageView;
- (void)updateRichImageView;
- (void)initView;
- (void)followStateChangeCallBack;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (id)init;

@end
