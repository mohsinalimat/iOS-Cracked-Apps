//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BEEBankLogoUrlQueryResult : NSObject
{
    _Bool _success;
    int _showType;
    NSString *_resultCode;
    NSString *_resultDesc;
    NSString *_resultView;
    NSString *_bankLogoUrl;
    NSString *_version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *bankLogoUrl; // @synthesize bankLogoUrl=_bankLogoUrl;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
