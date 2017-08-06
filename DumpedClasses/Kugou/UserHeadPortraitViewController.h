//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIImage, UIImageView;

@interface UserHeadPortraitViewController : KGViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _isUpLoadingImage;
    NSString *_highQualityImageUrl;
    UIImage *_noramlImage;
    UIImageView *_imageView;
    id <UserHeadPortraitViewControllerDelegate> _delegate;
    long long _type;
    struct CGSize _normalSizeForDisplay;
    struct CGSize _highQualitySizeForDisplay;
}

@property(nonatomic) _Bool isUpLoadingImage; // @synthesize isUpLoadingImage=_isUpLoadingImage;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <UserHeadPortraitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *noramlImage; // @synthesize noramlImage=_noramlImage;
@property(copy, nonatomic) NSString *highQualityImageUrl; // @synthesize highQualityImageUrl=_highQualityImageUrl;
@property(nonatomic) struct CGSize highQualitySizeForDisplay; // @synthesize highQualitySizeForDisplay=_highQualitySizeForDisplay;
@property(nonatomic) struct CGSize normalSizeForDisplay; // @synthesize normalSizeForDisplay=_normalSizeForDisplay;
- (void).cxx_destruct;
- (void)uploadUserPicture:(id)arg1 editingInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)showSystemPhotoAlbum;
- (void)changeImageEvent;
- (void)changeImage:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)showErrorView;
- (void)hideLoadingView;
- (void)showLoadingView;
- (_Bool)networkIsReady;
- (void)loadImage:(id)arg1;
- (void)loadHighQualityImage:(id)arg1;
- (void)resizeImageViewDisplaySize:(struct CGSize)arg1;
- (struct CGSize)HQDisplaySize;
- (struct CGSize)normalDisplaySize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
