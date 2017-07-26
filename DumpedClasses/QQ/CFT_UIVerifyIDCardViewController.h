//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIHttpViewController.h"

#import "RegionPickerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UserSummarySelectOccupationViewControllerDelegate.h"

@class CFT_TPKeyboardAvoidingScrollView, CFT_TpRegionPickerViewExtend, CFT_UIFormatField, NSString, UIButton;

@interface CFT_UIVerifyIDCardViewController : CFT_UIHttpViewController <RegionPickerDelegate, UIAlertViewDelegate, UserSummarySelectOccupationViewControllerDelegate, UITextFieldDelegate>
{
    long long _processionId;
    double _titleMaxWidth;
    _Bool _hadAppeared;
    _Bool _hadRealNameExtend;
    _Bool _isFindPassword;
    CFT_TpRegionPickerViewExtend *_pickerExtend;
    CFT_TPKeyboardAvoidingScrollView *_scrollView;
    CFT_UIFormatField *_nameField;
    CFT_UIFormatField *_IDField;
    CFT_UIFormatField *_timeField;
    CFT_UIFormatField *_addressSelectField;
    CFT_UIFormatField *_addressInputField;
    CFT_UIFormatField *_processionField;
    UIButton *_checkBox;
    UIButton *_nextStepBtn;
    NSString *_preAddressInputText;
}

+ (id)controllerForFindPassword;
+ (id)controllerForRealName;
@property(copy, nonatomic) NSString *preAddressInputText; // @synthesize preAddressInputText=_preAddressInputText;
- (void)dealloc;
- (void)overPop:(long long)arg1;
- (void)cancelPop;
- (void)routeToPassword:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)selectOccupationCallback:(id)arg1;
- (void)setRegionNames:(id)arg1 codes:(id)arg2 type:(int)arg3;
- (void)qwallet_auth_reset_passwd;
- (void)qwallet_name_auth;
- (void)onCancel:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)onProtocol:(id)arg1;
- (void)onCheck:(id)arg1;
- (void)onPushToProcession;
- (void)onEditDone:(id)arg1;
- (void)onDatePicker:(id)arg1;
- (void)onEditingChange:(id)arg1;
- (void)resetState;
- (id)getRgAccessoryView;
- (void)setupAddressPickers;
- (void)setupDatePickers;
- (id)formatFieldWithTitle:(id)arg1 placeholder:(id)arg2 yPos:(double)arg3 style:(unsigned long long)arg4;
- (id)setupNextSection;
- (id)setupProcessionSection;
- (id)setupAddressSection;
- (id)setupIDSection;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
