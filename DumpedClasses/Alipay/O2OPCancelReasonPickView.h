//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APPickerDelegate.h"

@class APPickerView, NSArray, NSString;

@interface O2OPCancelReasonPickView : UIView <APPickerDelegate>
{
    NSArray *_reasons;
    NSString *_subject;
    CDUnknownBlockType _completion;
    APPickerView *_reasonPickView;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) APPickerView *reasonPickView; // @synthesize reasonPickView=_reasonPickView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
- (void).cxx_destruct;
- (void)complete:(_Bool)arg1 reason:(id)arg2;
- (void)show;
- (void)touchBg:(id)arg1;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)selectedPickerView:(id)arg1;
- (void)cancelPickerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

