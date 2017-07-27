//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSessionDataTask, NVMAlertController, NVMCoreLocationService, UIWindow;

@interface NVMLocateManager : NSObject
{
    _Bool _needRecheckWhenBecomeActive;
    unsigned long long _locateStatus;
    CDUnknownBlockType _showChangeLocation;
    NVMCoreLocationService *_locationManager;
    NSURLSessionDataTask *_lastRequestOperation;
    UIWindow *_optionsWindow;
    NVMAlertController *_lastAuthorityAlertController;
}

+ (id)sharedManager;
@property(retain, nonatomic) NVMAlertController *lastAuthorityAlertController; // @synthesize lastAuthorityAlertController=_lastAuthorityAlertController;
@property(nonatomic) _Bool needRecheckWhenBecomeActive; // @synthesize needRecheckWhenBecomeActive=_needRecheckWhenBecomeActive;
@property(retain, nonatomic) UIWindow *optionsWindow; // @synthesize optionsWindow=_optionsWindow;
@property(retain, nonatomic) NSURLSessionDataTask *lastRequestOperation; // @synthesize lastRequestOperation=_lastRequestOperation;
@property(retain, nonatomic) NVMCoreLocationService *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) CDUnknownBlockType showChangeLocation; // @synthesize showChangeLocation=_showChangeLocation;
@property(nonatomic) unsigned long long locateStatus; // @synthesize locateStatus=_locateStatus;
- (void).cxx_destruct;
- (_Bool)locateTimeExpired;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)showChangePlaceViewController;
- (void)showAddressOptions:(id)arg1;
- (void)hideOptionsWindow;
- (void)loadOptionsWindow;
- (void)showChangeLocationServiceAuthority;
- (void)changeToLocation:(id)arg1 isSystemSelected:(_Bool)arg2;
- (void)changeToLocation:(id)arg1;
- (void)startLocatingIfNeed;
- (void)trackLocationChangeOfType:(unsigned long long)arg1 name:(id)arg2;
- (void)locateFailed:(id)arg1;
- (void)cancelLocate;
- (void)trackLocationChangeOfType:(unsigned long long)arg1;
- (void)requestAddressSuggestionWithGeoHash:(id)arg1 accuracy:(long long)arg2 location:(id)arg3 error:(id)arg4;
- (id)geoHashFromCoordinate:(struct CLLocationCoordinate2D)arg1 error:(id *)arg2;
- (void)startLocating;
- (void)dealloc;
- (id)init;

@end
