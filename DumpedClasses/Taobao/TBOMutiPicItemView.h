//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage, UIImageView;

@interface TBOMutiPicItemView : UIView
{
    UIImageView *imageView;
    UIButton *closeButton;
    id <TBOMutiPicItemViewDelegate> _delegate;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <TBOMutiPicItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)closeBottonDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

