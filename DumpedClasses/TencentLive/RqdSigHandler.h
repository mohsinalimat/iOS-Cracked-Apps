//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RqdSigHandler : NSObject
{
    _Bool _handlerEnable;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool handlerEnable; // @synthesize handlerEnable=_handlerEnable;
- (_Bool)UnInitAltStack;
- (_Bool)InitAltStack;
- (_Bool)uninstall;
- (_Bool)install;
- (_Bool)checkHandler;
- (_Bool)reset;
- (void)enableHandler:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

