//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SPopupView : UIView
{
    CDUnknownBlockType _confirmClick;
    CDUnknownBlockType _cancelClick;
}

@property(copy, nonatomic) CDUnknownBlockType cancelClick; // @synthesize cancelClick=_cancelClick;
@property(copy, nonatomic) CDUnknownBlockType confirmClick; // @synthesize confirmClick=_confirmClick;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 ConfirmPopupViewClick:(CDUnknownBlockType)arg2 CancelPopupViewCancelClick:(CDUnknownBlockType)arg3;
- (void)closePopoUpView:(id)arg1;
- (void)actionTapGuide:(id)arg1;
- (void)actionTap:(id)arg1;

@end

