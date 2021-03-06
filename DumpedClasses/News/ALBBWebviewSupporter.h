//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIViewController, UIWebView;

@interface ALBBWebviewSupporter : NSObject
{
    id <ALBBWebViewProxy> _webViewProxy;
    UIViewController *_viewController;
    NSMutableArray *_visitedURLs;
    NSString *_lastReloadUrl;
    UIWebView *_webView;
}

+ (id)getOauthToken;
+ (id)getAliCookieMaps;
+ (id)getTaobaoLogoutUrlPrefixList;
+ (id)getTaobaoLoginUrlPrefixList;
+ (void)beforeWebViewInit;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *lastReloadUrl; // @synthesize lastReloadUrl=_lastReloadUrl;
@property(retain, nonatomic) NSMutableArray *visitedURLs; // @synthesize visitedURLs=_visitedURLs;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) id <ALBBWebViewProxy> webViewProxy; // @synthesize webViewProxy=_webViewProxy;
- (void).cxx_destruct;
- (_Bool)handleURLActionRequest:(id)arg1;
- (id)sourceViewController;
- (id)initWithWebViewProxy:(id)arg1 sourceViewController:(id)arg2;
- (id)initWithWebView:(id)arg1 sourceViewController:(id)arg2;
- (void)setTaobaoCookie:(id)arg1;
- (id)char2Ascii:(unsigned short)arg1;
- (id)native2Ascii:(id)arg1;
- (void)clearTaobaoCookie;
- (void)setCookie:(id)arg1 value:(id)arg2 valueUrlEncoded:(_Bool)arg3;
- (void)setCookie:(id)arg1 value:(id)arg2;
- (void)writeCookie:(id)arg1;
- (void)addHistoryUrl:(id)arg1;
- (_Bool)safeReloadWebView;
- (void)onWebViewClosed;

@end

