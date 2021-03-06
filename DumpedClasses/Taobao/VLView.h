//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString, UIViewController, VLURLResult, VLViewCluster;

@interface VLView : UIView
{
    _Bool _disableDowngrade;
    UIView *_view;
    id <VLViewDelegate> _vlViewDelegate;
    UIViewController *_viewController;
    NSString *_pageName;
    NSDictionary *_componentKeyAndClassName;
    NSDictionary *_userInfo;
    id <VLViewLoadListener> _vlViewLoadListener;
    id <VLViewCallback> _vlViewCallback;
    VLViewCluster *_cluster;
    VLURLResult *_urlResult;
}

@property(retain, nonatomic) VLURLResult *urlResult; // @synthesize urlResult=_urlResult;
@property(retain, nonatomic) VLViewCluster *cluster; // @synthesize cluster=_cluster;
@property(nonatomic) __weak id <VLViewCallback> vlViewCallback; // @synthesize vlViewCallback=_vlViewCallback;
@property(nonatomic) __weak id <VLViewLoadListener> vlViewLoadListener; // @synthesize vlViewLoadListener=_vlViewLoadListener;
@property(nonatomic) _Bool disableDowngrade; // @synthesize disableDowngrade=_disableDowngrade;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSDictionary *componentKeyAndClassName; // @synthesize componentKeyAndClassName=_componentKeyAndClassName;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <VLViewDelegate> vlViewDelegate; // @synthesize vlViewDelegate=_vlViewDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getWeexInstance;
- (CDUnknownBlockType)bridgeHandler;
- (void)registerWindVaneAndWeex;
- (void)fireEvent:(id)arg1 Params:(id)arg2;
- (void)loadData:(id)arg1 tplUrl:(id)arg2 downgradeUrl:(id)arg3;
- (void)loadData:(id)arg1 downgradeUrl:(id)arg2;
- (void)loadUrl:(id)arg1;
- (unsigned char)hasVLViewDelegateSelector:(id)arg1;
- (unsigned char)hasImplentedLoadListenerSelector:(id)arg1;
- (_Bool)hasViewCall;
- (_Bool)hasOnScrolling;
- (_Bool)hasOnDowngradeParams;
- (_Bool)hasOnLoadError;
- (_Bool)hasOnLoadFinish;
- (_Bool)hasOnLoadStart;
- (_Bool)hasOnLoadVLViewError;
- (_Bool)hasOnLoadFinishWithVLView;
- (_Bool)hasOnLoadStartWithVLView;

@end

