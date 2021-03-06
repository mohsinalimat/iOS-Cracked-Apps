//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JLRoutes, NSArray, NSString;

@interface _JLRoute : NSObject
{
    JLRoutes *_parentRoutesController;
    NSString *_pattern;
    CDUnknownBlockType _block;
    unsigned long long _priority;
    NSArray *_patternPathComponents;
}

@property(retain, nonatomic) NSArray *patternPathComponents; // @synthesize patternPathComponents=_patternPathComponents;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(nonatomic) __weak JLRoutes *parentRoutesController; // @synthesize parentRoutesController=_parentRoutesController;
- (void).cxx_destruct;
- (id)description;
- (id)parametersForURL:(id)arg1 components:(id)arg2;

@end

