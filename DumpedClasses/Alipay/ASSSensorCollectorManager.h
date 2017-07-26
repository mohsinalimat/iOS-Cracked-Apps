//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SensorCollectProtocol.h"

@class ASSSensorCollectEngine, ASSSensorStatus, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface ASSSensorCollectorManager : NSObject <SensorCollectProtocol>
{
    _Bool _isUploading;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSDictionary *_viewWhites;
    NSMutableArray *_sensorRepository;
    ASSSensorStatus *_sensorStatus;
    ASSSensorCollectEngine *_sensorEngine;
    NSMutableArray *_recordUploadCnt;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *recordUploadCnt; // @synthesize recordUploadCnt=_recordUploadCnt;
@property(retain, nonatomic) ASSSensorCollectEngine *sensorEngine; // @synthesize sensorEngine=_sensorEngine;
@property _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain) ASSSensorStatus *sensorStatus; // @synthesize sensorStatus=_sensorStatus;
@property(retain) NSMutableArray *sensorRepository; // @synthesize sensorRepository=_sensorRepository;
@property(retain, nonatomic) NSDictionary *viewWhites; // @synthesize viewWhites=_viewWhites;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
- (void).cxx_destruct;
- (void)notifyApplicationWillResignActive:(id)arg1;
- (void)notifyViewDidAppear:(id)arg1;
- (void)registerKcartMonitorService;
- (void)uploadSensorData;
- (void)sensorDataCollectFinished:(id)arg1;
- (void)startCollectSensorDataAsync:(id)arg1;
- (_Bool)isCollectionAllowed;
- (void)startOrSwitchNewPage:(id)arg1;
- (void)loadLocalStorageForUploadCnt;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
