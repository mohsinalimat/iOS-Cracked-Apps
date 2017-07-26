//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSString;

@interface TXUpUISignal : NSObject
{
    _Bool _dead;
    _Bool _reach;
    unsigned long long _jump;
    id _source;
    id _target;
    NSString *_name;
    NSObject *_object;
    NSMutableString *_callPath;
}

@property(retain, nonatomic) NSMutableString *callPath; // @synthesize callPath=_callPath;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) __weak id source; // @synthesize source=_source;
@property(nonatomic) unsigned long long jump; // @synthesize jump=_jump;
@property(nonatomic) _Bool reach; // @synthesize reach=_reach;
@property(nonatomic) _Bool dead; // @synthesize dead=_dead;
- (void).cxx_destruct;
- (void)clear;
- (void)routes;
- (_Bool)forward:(id)arg1;
- (_Bool)send;
- (_Bool)is:(id)arg1;
- (id)description;
- (id)init;

@end
