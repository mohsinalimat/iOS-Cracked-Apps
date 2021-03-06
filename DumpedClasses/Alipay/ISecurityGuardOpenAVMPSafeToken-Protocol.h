//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOpenSecurityGuardPluginInterface.h"
#import "NSObject.h"

@class NSData, NSString;

@protocol ISecurityGuardOpenAVMPSafeToken <NSObject, IOpenSecurityGuardPluginInterface>
- (int)getOTP:(NSString *)arg1 flag:(int)arg2;
- (NSString *)signWithToken:(NSString *)arg1 inputData:(NSData *)arg2 flag:(int)arg3;
- (NSData *)decryptWithToken:(NSString *)arg1 inputData:(NSData *)arg2 flag:(int)arg3;
- (NSData *)encryptWithToken:(NSString *)arg1 inputData:(NSData *)arg2 flag:(int)arg3;
- (void)removeToken:(NSString *)arg1;
- (_Bool)isTokenExist:(NSString *)arg1;
- (_Bool)saveToken:(NSString *)arg1 forKey:(NSString *)arg2 additional:(NSString *)arg3 flag:(int)arg4;
@end

