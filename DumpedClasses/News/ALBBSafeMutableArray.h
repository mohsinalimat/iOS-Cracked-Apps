//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSSet;

@interface ALBBSafeMutableArray : NSObject <NSCopying, NSMutableCopying>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_backingStore;
}

+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithSet:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)runSynchronousReadBlock:(CDUnknownBlockType)arg1;
- (void)runAsynchronousWriteBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
@property(readonly) unsigned long long count;
@property(readonly, copy) NSSet *set;
@property(readonly, copy) NSArray *array;
- (id)popFirstObject;
- (id)firstObject;
- (id)popLastObject;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)init;
- (id)description;
@property(readonly) NSMutableArray *backingStore; // @synthesize backingStore=_backingStore;
- (void)createQueue;

@end
