//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQFunctionEntrance : NSObject
{
    NSMutableDictionary *_functionDic;
}

+ (id)shareInstance;
- (id)QQRecentMessageModel:(id)arg1 type:(int)arg2 name:(id)arg3;
- (void)openUrlWithoutPluginData:(id)arg1;
- (void)openWebViewController:(id)arg1;
- (_Bool)openControllerFromPluginUrl:(long long)arg1 secondPluginResID:(long long)arg2;
- (_Bool)openControllerFromPluginUrl:(long long)arg1;
- (void)openExpandFunction:(id)arg1;
- (void)openAGreeting:(id)arg1;
- (void)openServiceAccount:(id)arg1;
- (void)openSayHello:(id)arg1;
- (void)openNewFriend:(id)arg1;
- (void)openMyOtherQQAccount:(id)arg1;
- (void)openQQRedpack:(id)arg1;
- (void)openGroupNotification:(id)arg1;
- (void)openShoppingAccount:(id)arg1;
- (void)openGroupAssistant:(id)arg1;
- (void)openFaceToFaceRedpack:(id)arg1;
- (void)openPayment:(id)arg1;
- (void)openQRScan:(id)arg1;
- (void)openFaceToFaceTransfer:(id)arg1;
- (void)openMyComputer:(id)arg1;
- (void)openPublicAccount:(id)arg1;
- (void)openQQTutor:(id)arg1;
- (void)openTencentClass:(id)arg1;
- (void)openSport:(id)arg1;
- (void)openTencentNews:(id)arg1;
- (void)openCityService:(id)arg1;
- (void)openEatDrinkPlayEojoy:(id)arg1;
- (void)openNOW:(id)arg1;
- (void)openMusic:(id)arg1;
- (void)openComic:(id)arg1;
- (void)openRead:(id)arg1;
- (void)openJinDong:(id)arg1;
- (void)openReadInJoy:(id)arg1;
- (void)openStory:(id)arg1;
- (void)openGame:(id)arg1;
- (void)openTribe:(id)arg1;
- (void)openSprite:(id)arg1;
- (void)openNearby:(id)arg1;
- (void)openQZone:(id)arg1;
- (void)openContacts:(id)arg1;
- (void)openQQExpert:(id)arg1;
- (void)openMyFiles:(id)arg1;
- (void)openAlbum:(id)arg1;
- (void)openMyFavorites:(id)arg1;
- (void)openPersonalityDecoration:(id)arg1;
- (void)openQQWallet:(id)arg1;
- (void)openQQVip:(id)arg1;
- (void)openFunctionWithID:(int)arg1 withParam:(id)arg2;
- (void)openFunctionWithID:(int)arg1;
- (_Bool)isFunctionSupported:(int)arg1 withParam:(id)arg2;
- (void)registerFunction:(int)arg1 withSelector:(SEL)arg2;
- (void)dealloc;
- (id)init;

@end
