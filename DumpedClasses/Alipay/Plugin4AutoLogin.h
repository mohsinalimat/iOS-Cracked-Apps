//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginBase.h"

@class NSURL;

@interface Plugin4AutoLogin : PluginBase
{
    _Bool _canEnable;
    NSURL *_lastLoginUrl;
}

@property(retain, nonatomic) NSURL *lastLoginUrl; // @synthesize lastLoginUrl=_lastLoginUrl;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)name;
- (void)addProxy;
- (id)init;
- (void)dealloc;

@end

