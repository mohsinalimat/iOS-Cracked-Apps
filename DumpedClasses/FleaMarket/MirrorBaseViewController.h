//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MirrorLayoutSubViewsDelegate.h"

@class NSString;

@interface MirrorBaseViewController : UIViewController <MirrorLayoutSubViewsDelegate>
{
    NSString *_paramURLArgs;
}

@property(retain, nonatomic) NSString *paramURLArgs; // @synthesize paramURLArgs=_paramURLArgs;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

