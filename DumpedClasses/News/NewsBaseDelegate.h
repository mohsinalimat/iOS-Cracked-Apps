//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "ArticleAPNsManagerDelegate.h"
#import "CrashlyticsDelegate.h"
#import "TTAppTopNavigationControllerDatasource.h"
#import "TTWeChatSharePayDelegate.h"
#import "TTWeChatShareRequestDelegate.h"
#import "UIApplicationDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, TTNavigationController, UIWindow;

@interface NewsBaseDelegate : UIResponder <CrashlyticsDelegate, TTWeChatSharePayDelegate, TTWeChatShareRequestDelegate, UIApplicationDelegate, ArticleAPNsManagerDelegate, TTAppTopNavigationControllerDatasource>
{
    long long _splashADShowType;
    unsigned long long _reportTryCount;
    NSMutableDictionary *_remotoNotificationDict;
    _Bool _adShow;
    _Bool _mainViewDidShow;
    UIWindow *_window;
    NSString *deviceTokenString;
    NSObject<OS_dispatch_queue> *_barrierQueue;
    TTNavigationController *_navigationController;
    NSDictionary *_launchOptions;
    NSMutableArray *_residentTasks;
}

+ (void)startRegisterRemoteNotificationAfterAuthorizeWithDelay:(int)arg1;
+ (void)startRegisterRemoteNotificationWithGuideConfigInfoAfterDelay:(int)arg1;
+ (void)startReportLocationWithGuideConfigInfo;
+ (void)startRegisterRemoteNotificationAfterDelay:(int)arg1;
+ (void)startRegisterRemoteNotification;
@property(retain, nonatomic) NSMutableArray *residentTasks; // @synthesize residentTasks=_residentTasks;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) TTNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(nonatomic) _Bool mainViewDidShow; // @synthesize mainViewDidShow=_mainViewDidShow;
@property(nonatomic) _Bool adShow; // @synthesize adShow=_adShow;
@property(copy, nonatomic) NSString *deviceTokenString; // @synthesize deviceTokenString;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)weChatShare:(id)arg1 receiveRequest:(id)arg2;
- (void)weChatShare:(id)arg1 payResponse:(id)arg2;
- (double)startTime;
- (void)addResistentTaskIfNeeded:(id)arg1;
- (void)trackCurrentIntervalInMainThreadWithTag:(id)arg1;
- (id)exploreMainViewController;
- (id)categorySelectorView;
- (id)appTopNavigationController;
- (void)addFeedbackLaunchCheck;
- (void)apnsManager:(id)arg1 handleUserInfoContainsID:(id)arg2;
- (_Bool)apnsManager:(id)arg1 canPresentViewControllerToUserID:(id)arg2;
- (id)dingtalkAppID;
- (id)weixinAppID;
- (id)appKey;
- (id)umengTrackAppkey;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)sendLaunchTrackIfNeededWithUrl:(id)arg1;
- (_Bool)canHandleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (_Bool)application:(id)arg1 refactorLaunchProcessWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)setSchemaSplashADShowType:(_Bool)arg1;
- (void)settingSplashADShowType:(_Bool)arg1;
- (void)cleanCoreDataIfNeeded;
@property(nonatomic) _Bool useWebview;
- (void)dealloc;
- (void)didFinishSerialLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishOpenURLLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishSDKsLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishWebviewLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishUILaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishServiceLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishNotificationLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishDebugLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishADLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;
- (void)didFinishInterfaceLaunchingForApplication:(id)arg1 WithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
