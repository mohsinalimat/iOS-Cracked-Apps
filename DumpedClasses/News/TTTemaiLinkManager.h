//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTTemaiLinkManager : NSObject
{
    _Bool _albbLinkEnable;
    _Bool _jdLinkEnable;
    _Bool _keplerEnable;
}

+ (id)sharedManager;
@property(nonatomic, getter=isKeplerEnable) _Bool keplerEnable; // @synthesize keplerEnable=_keplerEnable;
@property(nonatomic, getter=isJdLinkEnable) _Bool jdLinkEnable; // @synthesize jdLinkEnable=_jdLinkEnable;
@property(nonatomic, getter=isAlbbLinkEnable) _Bool albbLinkEnable; // @synthesize albbLinkEnable=_albbLinkEnable;
- (_Bool)handleOpenURL:(id)arg1;
- (id)getService:(id)arg1;
- (_Bool)handleLinkInfo:(id)arg1 inViewController:(id)arg2;

@end
