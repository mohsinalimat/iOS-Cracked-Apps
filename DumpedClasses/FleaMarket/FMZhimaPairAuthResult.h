//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMZhimaPairAuthResult : NSObject
{
    _Bool _success;
    NSString *_errorCode;
    NSString *_errorMsg;
}

@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
