//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGFileStateTransfer : NSObject
{
    struct map<KGTransferNode, bool, std::__1::less<KGTransferNode>, std::__1::allocator<std::__1::pair<const KGTransferNode, bool>>> _stateTransfer;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSingleton;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)checkStateTransfer:(int)arg1 to:(int)arg2;
- (void)initAllData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
