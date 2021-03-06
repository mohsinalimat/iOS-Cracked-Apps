//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TBSDKThreadSafeMutableDictionary;

@interface TBSDKUnitAPIListManager : NSObject
{
    NSDictionary *_originalAPIUnitInfoDict;
    TBSDKThreadSafeMutableDictionary *_apiUnitInfoDict;
    NSString *_apiListVersion;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *apiListVersion; // @synthesize apiListVersion=_apiListVersion;
- (void).cxx_destruct;
- (void)saveAPIListToDesk;
- (void)loadAPIListFromDesk;
- (void)paseJSONToAPIUnitInfo:(id)arg1;
- (void)updateUnitAPIListConfigureWithURL:(id)arg1 apiVersion:(id)arg2 utilConfigure:(CDUnknownBlockType)arg3;
- (id)getKeyWithAPIName:(id)arg1 version:(id)arg2;
- (_Bool)apiIsUnit:(id)arg1 apiVersion:(id)arg2;
- (id)init;

@end

