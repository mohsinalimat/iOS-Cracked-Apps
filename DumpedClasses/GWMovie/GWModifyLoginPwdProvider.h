//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWModifyLoginPwdProvider : GWBaseInfoProvider
{
    NSString *oldpwd;
    NSString *newpwd;
}

@property(copy, nonatomic) NSString *newpwd; // @synthesize newpwd;
@property(copy, nonatomic) NSString *oldpwd; // @synthesize oldpwd;
- (void).cxx_destruct;
- (id)parseResponed:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)dealloc;

@end

