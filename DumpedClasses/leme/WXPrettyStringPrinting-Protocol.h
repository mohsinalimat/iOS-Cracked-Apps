//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURLRequest, NSURLResponse;

@protocol WXPrettyStringPrinting <NSObject>
- (NSString *)prettyStringForData:(NSData *)arg1 forResponse:(NSURLResponse *)arg2 request:(NSURLRequest *)arg3;
- (NSString *)prettyStringForData:(NSData *)arg1 forRequest:(NSURLRequest *)arg2;
- (_Bool)canPrettyStringPrintResponse:(NSURLResponse *)arg1 withRequest:(NSURLRequest *)arg2;
- (_Bool)canPrettyStringPrintRequest:(NSURLRequest *)arg1;
@end
