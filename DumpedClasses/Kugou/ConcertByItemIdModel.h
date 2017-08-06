//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGJSONToModelProtocol.h"

@class ConcertByItemIdDataModel, NSString;

@interface ConcertByItemIdModel : NSObject <KGJSONToModelProtocol>
{
    long long _status;
    long long _errcode;
    NSString *_error;
    ConcertByItemIdDataModel *_data;
}

@property(retain, nonatomic) ConcertByItemIdDataModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(nonatomic) long long errcode; // @synthesize errcode=_errcode;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
