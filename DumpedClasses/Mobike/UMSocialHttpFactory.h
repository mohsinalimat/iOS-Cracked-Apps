//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMSocialHttpFactory : NSObject
{
}

+ (id)makeRequestWithMethod:(long long)arg1 path:(id)arg2 pathParameters:(id)arg3 bodyParameters:(id)arg4 headers:(id)arg5;
+ (id)bodyParameterString:(id)arg1;
+ (id)requestWithPath:(id)arg1 parameters:(id)arg2 headers:(id)arg3;
+ (id)getStringFromDictionary:(id)arg1 key:(id)arg2;

@end
