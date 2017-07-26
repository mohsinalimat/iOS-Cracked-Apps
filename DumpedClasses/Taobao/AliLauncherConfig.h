//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AliLauncherConfig : NSObject
{
    NSArray *_heads;
    NSArray *_tails;
    NSArray *_syncs;
    NSArray *_asyncs;
    NSArray *_importants;
    NSArray *_idles;
}

+ (_Bool)loadConfigFromAnnotations:(id)arg1;
+ (id)loadConfig:(id)arg1 andAnnotation:(_Bool)arg2 andSmart:(_Bool)arg3;
@property(retain, nonatomic) NSArray *idles; // @synthesize idles=_idles;
@property(retain, nonatomic) NSArray *importants; // @synthesize importants=_importants;
@property(retain, nonatomic) NSArray *asyncs; // @synthesize asyncs=_asyncs;
@property(retain, nonatomic) NSArray *syncs; // @synthesize syncs=_syncs;
@property(retain, nonatomic) NSArray *tails; // @synthesize tails=_tails;
@property(retain, nonatomic) NSArray *heads; // @synthesize heads=_heads;
- (void).cxx_destruct;

@end
