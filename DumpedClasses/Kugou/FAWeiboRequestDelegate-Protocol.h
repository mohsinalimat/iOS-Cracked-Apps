//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAWeiboRequest, NSData, NSError, NSString, NSURL, NSURLResponse;

@protocol FAWeiboRequestDelegate <NSObject>

@optional
- (void)request:(FAWeiboRequest *)arg1 didReciveRedirectResponseWithURI:(NSURL *)arg2;
- (void)request:(FAWeiboRequest *)arg1 didFinishLoadingWithDataResult:(NSData *)arg2;
- (void)request:(FAWeiboRequest *)arg1 didFinishLoadingWithResult:(NSString *)arg2;
- (void)request:(FAWeiboRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(FAWeiboRequest *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

