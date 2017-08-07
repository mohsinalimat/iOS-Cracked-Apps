//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GWPhotoViewDelegate-Protocol.h"

@class GWPhotoView, NSArray, NSIndexPath, NSString;
@protocol GWPhotoPickerViewCellDelegate;

@interface GWPhotoPickerViewCell : UITableViewCell <GWPhotoViewDelegate>
{
    float _minimumInteritemSpacing;
    float _minimumLineSpacing;
    float _photoViewX;
    id <GWPhotoPickerViewCellDelegate> _delegate;
    GWPhotoView *_cameraView;
    NSArray *_photoViewArray;
    NSIndexPath *_index;
    NSArray *_photos;
}

@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSIndexPath *index; // @synthesize index=_index;
@property(nonatomic) float photoViewX; // @synthesize photoViewX=_photoViewX;
@property(nonatomic) float minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) float minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(retain, nonatomic) NSArray *photoViewArray; // @synthesize photoViewArray=_photoViewArray;
@property(nonatomic) GWPhotoView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) __weak id <GWPhotoPickerViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)GWPhotoView:(id)arg1 shutterCamera:(_Bool)arg2;
- (void)GWPhotoView:(id)arg1 tapImage:(id)arg2;
- (void)GWPhotoView:(id)arg1 tapSelectHandle:(_Bool)arg2 picture:(id)arg3;
- (_Bool)GWPhotoView:(id)arg1 shouldSelectPicture:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)isSelecedOrNot:(id)arg1;
- (struct CGRect)getPhotoViewFrameByIndex:(int)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
