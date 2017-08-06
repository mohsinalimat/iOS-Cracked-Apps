//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface NWSidewayUT : NSObject
{
    NSString *_baidu_ips;
    NSString *_acs_ips;
    NSString *_net_type;
    _Bool _is_enabled;
    _Bool _is_ipv6only;
    NSMutableDictionary *_commDict;
    NSMutableDictionary *_vipDict;
    NSRecursiveLock *_lock;
}

+ (id)getHostbyname:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)detectHostbyname;
- (void)report2testapi:(id)arg1;
- (id)dict2string:(id)arg1;
- (_Bool)isCacheEventFull:(id)arg1;
- (void)commitEvent:(id)arg1 withContent:(id)arg2 withMaxCache:(unsigned long long)arg3 isVip:(_Bool)arg4;
- (void)setNetType:(int)arg1;
- (void)setEnable:(_Bool)arg1;
- (void)reset;
- (id)init;

@end
