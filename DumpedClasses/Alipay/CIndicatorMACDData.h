//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface CIndicatorMACDData : NSObject <NSCoding>
{
    NSString *_market;
    NSString *_code;
    NSString *_args;
    NSMutableArray *_macdPara;
    CDStruct_2b56ed6f _maxMacdValue;
    CDStruct_2b56ed6f _minMacdValue;
    CDStruct_1ed7117a _startTime;
    CDStruct_1ed7117a _endTime;
}

@property(nonatomic) CDStruct_2b56ed6f minMacdValue; // @synthesize minMacdValue=_minMacdValue;
@property(nonatomic) CDStruct_2b56ed6f maxMacdValue; // @synthesize maxMacdValue=_maxMacdValue;
@property(retain, nonatomic) NSMutableArray *macdPara; // @synthesize macdPara=_macdPara;
@property(nonatomic) CDStruct_1ed7117a endTime; // @synthesize endTime=_endTime;
@property(nonatomic) CDStruct_1ed7117a startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *market; // @synthesize market=_market;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

