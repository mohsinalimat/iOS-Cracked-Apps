//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class APToastView, NSString;

@interface NBSwitchAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    NSString *_schemeToLaunch;
    NSString *_launchToken;
    APToastView *_toastView;
}

@property(retain, nonatomic) APToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) NSString *launchToken; // @synthesize launchToken=_launchToken;
@property(retain, nonatomic) NSString *schemeToLaunch; // @synthesize schemeToLaunch=_schemeToLaunch;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidResume:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

