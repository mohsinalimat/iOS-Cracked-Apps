//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobilelbsStepCounterQueryRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool countQuery; // @dynamic countQuery;
@property(retain, nonatomic) NSArray *deviceInfos; // @dynamic deviceInfos;
@property(readonly) _Bool hasCountQuery; // @dynamic hasCountQuery;
@property(readonly) _Bool hasQDeviceId; // @dynamic hasQDeviceId;
@property(readonly) _Bool hasQType; // @dynamic hasQType;
@property(readonly) _Bool hasQueryByDevice; // @dynamic hasQueryByDevice;
@property(readonly) _Bool hasStatusQuery; // @dynamic hasStatusQuery;
@property(readonly) _Bool hasTimezone; // @dynamic hasTimezone;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *qDeviceId; // @dynamic qDeviceId;
@property(nonatomic) int qType; // @dynamic qType;
@property(nonatomic) _Bool queryByDevice; // @dynamic queryByDevice;
@property(nonatomic) _Bool statusQuery; // @dynamic statusQuery;
@property(retain, nonatomic) NSString *timezone; // @dynamic timezone;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

