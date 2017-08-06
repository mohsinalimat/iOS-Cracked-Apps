//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHomeAwareCom.h"

#import "DiDiLocationManagerDelegate.h"
#import "SSofaLocationServiceDelegate.h"

@class NSString, SSofaBizDataSource, UIButton;

@interface SSofaHomeAwareUnit : SHomeAwareCom <DiDiLocationManagerDelegate, SSofaLocationServiceDelegate>
{
    _Bool _hasSelectedEvent;
    SSofaBizDataSource *_sofaDataSource;
    UIButton *_netModeChangeButton;
}

@property(retain, nonatomic) UIButton *netModeChangeButton; // @synthesize netModeChangeButton=_netModeChangeButton;
@property(nonatomic) _Bool hasSelectedEvent; // @synthesize hasSelectedEvent=_hasSelectedEvent;
@property(nonatomic) __weak SSofaBizDataSource *sofaDataSource; // @synthesize sofaDataSource=_sofaDataSource;
- (void).cxx_destruct;
- (id)currentViewController;
- (void)netModeChangeButtonClicked:(id)arg1;
- (void)quitConfirmBuriedPoint;
- (void)routerToEndPage:(id)arg1;
- (void)showActivityFullScreenPage:(id)arg1;
- (void)showActivityPage:(id)arg1;
- (void)_sofa_showOpenCityAd;
- (void)checkShouldShowOpenCityPage:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didSelected;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;
- (void)didUnselected;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBaseComProtocol><SFormDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
