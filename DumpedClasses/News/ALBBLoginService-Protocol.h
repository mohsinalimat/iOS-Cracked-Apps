//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, UIViewController, UIWindow;

@protocol ALBBLoginService
- (void)showQRLogin:(UIViewController *)arg1 params:(NSDictionary *)arg2 successCallback:(void (^)(TaeSession *))arg3 failedCallback:(void (^)(NSError *))arg4;
- (void)showLogin:(UIViewController *)arg1 successCallback:(void (^)(TaeSession *))arg2 failedCallback:(void (^)(NSError *))arg3 notUseTaobaoAppLogin:(_Bool)arg4 isBackButtonHidden:(_Bool)arg5;
- (void)showLogin:(UIViewController *)arg1 successCallback:(void (^)(TaeSession *))arg2 failedCallback:(void (^)(NSError *))arg3 notUseTaobaoAppLogin:(_Bool)arg4;
- (void)showLogin:(UIViewController *)arg1 successCallback:(void (^)(TaeSession *))arg2 failedCallback:(void (^)(NSError *))arg3;
- (void)showLoginOnRootView:(UIWindow *)arg1 successCallback:(void (^)(TaeSession *))arg2 failedCallback:(void (^)(NSError *))arg3 notUseTaobaoAppLogin:(_Bool)arg4 isBackButtonHidden:(_Bool)arg5;
- (void)logout;
- (void)setSessionStateChangedHandler:(void (^)(TaeSession *))arg1;
@end

