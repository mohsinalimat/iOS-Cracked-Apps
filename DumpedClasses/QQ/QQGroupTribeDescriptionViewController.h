//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

#import "UITextFieldDelegate.h"

@class NSMutableDictionary, NSString, UIButton, UIImage;

@interface QQGroupTribeDescriptionViewController : PhotoBrowserBaseViewContoller <UITextFieldDelegate>
{
    id <QQGroupTribeDescriptionDelegate> _delegate;
    _Bool _enabledCheckBtn;
    _Bool _enabledLongPress;
    UIButton *_checkButton;
    NSMutableDictionary *_checkStateDict;
    UIImage *_checkedButtonImage;
    UIImage *_uncheckButtonImage;
}

- (void).cxx_destruct;
- (void)longPressDetected;
- (id)getToolbar;
- (void)updateCheckButton;
- (void)clickCurrentPhotoCheckButton:(id)arg1 forEvent:(id)arg2;
- (void)hidePhotoBrowser;
- (void)didScrollToPage:(int)arg1;
- (void)insertPhotos:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QQGroupTribeDescriptionDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabledCheckBtn; // @dynamic enabledCheckBtn;
@property(nonatomic) _Bool enabledLongPress; // @dynamic enabledLongPress;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
