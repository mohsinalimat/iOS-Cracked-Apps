//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

@class FMMyCityView, FMMyCityViewModel, FMSearchMidViewComponent, UIButton;

@interface FMMyCityViewController : FMBaseViewController
{
    FMMyCityView *_myCityView;
    _Bool _isUpdateLocation;
    UIButton *_postButton;
    FMMyCityViewModel *_viewModel;
    FMSearchMidViewComponent *_searchMidViewComponent;
}

@property(retain, nonatomic) FMSearchMidViewComponent *searchMidViewComponent; // @synthesize searchMidViewComponent=_searchMidViewComponent;
@property(retain, nonatomic) FMMyCityViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
- (void).cxx_destruct;
- (void)$$updateLocationSuccessNotification:(id)arg1 locationDO:(id)arg2;
- (void)$$myCityClickFishpond:(id)arg1 fishpondDO:(id)arg2;
- (void)$$myCityClickSearchButton;
- (void)updateCity:(id)arg1 cityLocationDO:(id)arg2;
- (void)$$myCityClickCityButton:(id)arg1 cityInfoDO:(id)arg2;
- (void)requestData;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)post:(id)arg1;
- (void)$$backButtonTapped;
- (void)loadView;
- (id)init;

@end

