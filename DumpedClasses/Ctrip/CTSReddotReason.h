//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTSReddotReason : NSObject
{
    NSString *_reasonType;
    double _recvtime;
    NSString *_bizType;
    NSString *_rdId;
}

@property(copy, nonatomic) NSString *rdId; // @synthesize rdId=_rdId;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) double recvtime; // @synthesize recvtime=_recvtime;
@property(copy, nonatomic) NSString *reasonType; // @synthesize reasonType=_reasonType;
- (void).cxx_destruct;
- (id)recvTimeFormatStr;
- (id)init;

@end
