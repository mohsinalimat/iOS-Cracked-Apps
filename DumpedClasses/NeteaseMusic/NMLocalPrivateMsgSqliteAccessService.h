//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMLocalPrivateMsgSqliteAccessService : NSObject
{
}

+ (id)shareInstance;
- (_Bool)updateAllLocalPrivateMsgFromUser:(id)arg1 state:(unsigned long long)arg2 databaseQueue:(id)arg3;
- (_Bool)updateLocalPrivateMsg:(id)arg1 state:(unsigned long long)arg2 databaseQueue:(id)arg3;
- (id)checkHasLocalPrivateMsgToUserList:(id)arg1 databaseQueue:(id)arg2;
- (id)loadAllLocalPrivateMsgToUser:(id)arg1 databaseQueue:(id)arg2;
- (_Bool)removeLocalPrivateMsg:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;
- (_Bool)addLocalPrivateMsg:(id)arg1 userId:(id)arg2 databaseQueue:(id)arg3;

@end

