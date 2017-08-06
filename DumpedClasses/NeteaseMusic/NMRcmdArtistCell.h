//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "NMAvatarViewDelegate.h"

@class NMArtist, NMAvatarView, NSString, UIButton, UIColor, UIImageView, UILabel;

@interface NMRcmdArtistCell : UICollectionViewCell <NMAvatarViewDelegate>
{
    UIImageView *_bgView;
    UIButton *_closeButton;
    NMAvatarView *_avatarView;
    UILabel *_artistNameLabel;
    UILabel *_rcmdReasonLabel;
    UIButton *_subButton;
    _Bool _closeButtonHidden;
    NMArtist *_artist;
    id <NMRcmdArtistCellDelegate> _delegate;
    UIColor *_contentViewBackgroundColor;
}

@property(retain, nonatomic) UIColor *contentViewBackgroundColor; // @synthesize contentViewBackgroundColor=_contentViewBackgroundColor;
@property(nonatomic) _Bool closeButtonHidden; // @synthesize closeButtonHidden=_closeButtonHidden;
@property(nonatomic) __weak id <NMRcmdArtistCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NMArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (void)avatarView:(id)arg1 avatarClicked:(id)arg2;
- (void)highlightButtonClicked:(id)arg1;
- (void)closeButtonClicekd:(id)arg1;
- (void)subButtonClicked:(id)arg1;
- (void)setArtist:(id)arg1 subTitleText:(id)arg2;
- (void)layoutSubviews;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
