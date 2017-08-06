//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DMDevice : NSObject
{
    NSString *_model;
    NSString *_systemVersion;
    NSString *_identifierForVendor;
}

+ (id)currentDevice;
@property(copy, nonatomic) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (_Bool)isPandaHomeInstalled;
- (_Bool)isJailbroken;
- (void)getStoredId;
- (_Bool)isIOSBlurAvailable;
- (id)hardwarePlatform;
- (_Bool)isIOS9;
- (_Bool)isIOS8;
- (_Bool)isIOS7;
- (void)dealloc;

@end
