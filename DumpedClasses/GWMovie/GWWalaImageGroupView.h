//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWImageViewDelegate-Protocol.h"

@class GWPhotoViewAnimation, NSArray, NSMutableSet, NSString;
@protocol GWImageViewDelegate;

@interface GWWalaImageGroupView : UIView <GWImageViewDelegate>
{
    _Bool _loadCacheSync;
    id <GWImageViewDelegate> _delegate;
    NSArray *_pictureArray;
    CDUnknownBlockType _assetsImageLoadingFinish;
    double _calcWidth;
    GWPhotoViewAnimation *_photoViewAnimation;
    NSMutableSet *_unusePictureViews;
    NSMutableSet *_assertLoadingFinishedUrls;
}

+ (struct CGSize)layoutFourImageWithPictureList:(id)arg1 rectList:(id)arg2 withWidth:(double)arg3;
+ (struct CGSize)layoutThreeImageWithPictureList:(id)arg1 rectList:(id)arg2 withWidth:(double)arg3;
+ (struct CGSize)layoutTwoImageWithPictureList:(id)arg1 rectList:(id)arg2 withWidth:(double)arg3;
+ (struct CGSize)layoutOneImageWithPictureList:(id)arg1 rectList:(id)arg2 withWidth:(double)arg3;
+ (struct CGSize)viewSizeWithPictureList:(id)arg1 rectList:(id)arg2 withWidth:(double)arg3;
@property(retain, nonatomic) NSMutableSet *assertLoadingFinishedUrls; // @synthesize assertLoadingFinishedUrls=_assertLoadingFinishedUrls;
@property(retain, nonatomic) NSMutableSet *unusePictureViews; // @synthesize unusePictureViews=_unusePictureViews;
@property(retain, nonatomic) GWPhotoViewAnimation *photoViewAnimation; // @synthesize photoViewAnimation=_photoViewAnimation;
@property(nonatomic) double calcWidth; // @synthesize calcWidth=_calcWidth;
@property(nonatomic) _Bool loadCacheSync; // @synthesize loadCacheSync=_loadCacheSync;
@property(copy, nonatomic) CDUnknownBlockType assetsImageLoadingFinish; // @synthesize assetsImageLoadingFinish=_assetsImageLoadingFinish;
@property(retain, nonatomic) NSArray *pictureArray; // @synthesize pictureArray=_pictureArray;
@property(nonatomic) __weak id <GWImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageDidClicked:(id)arg1;
- (id)imageGroupViews;
- (id)imageViewWithIndex:(unsigned long long)arg1;
- (id)addImageViewByModel:(id)arg1 frame:(struct CGRect)arg2 tag:(unsigned long long)arg3;
- (void)checkAssertImageLoadingFinished;
- (void)reloadImageGroupView;
- (struct CGSize)viewSizeWithRectList:(id)arg1 withWidth:(double)arg2;
- (void)resizeImageGroupView:(double)arg1;
- (void)resizeImageGroupView;
- (void)layoutSubviews;
- (void)cancelImageLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
