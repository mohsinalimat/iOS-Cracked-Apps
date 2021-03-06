//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDictionary, UIImage;

@interface VIViewController : UIViewController
{
    _Bool _originalStatusBarHidden;
    _Bool _originalNavigationBarHidden;
    long long _originalStatusBarStyle;
    UIImage *_backgroundImageForBarMetrics;
    UIImage *_originalNavBgShadowImage;
    NSDictionary *_titleTextAttributes;
    id <VIBarButtonItem> _barButtonItem;
    _Bool _hasAppeared;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)back;
- (double)visiableViewOriginY;
- (_Bool)isVisible;
- (void)setupNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)restoreStatusBarStatus;
- (void)saveStatusBarStatus;
- (void)viewDidLoad;

@end

