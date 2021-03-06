//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQServiceGridCell.h"

#import "QQWalletImageDownloaderDelegate.h"

@class NSMutableArray, NSString, QQWalletApp, QQWalletFolder, QQWalletImageDownloader, SFImageView, UIImageView, UILabel, UIView;

@interface QQWalletServiceGridCell : QQServiceGridCell <QQWalletImageDownloaderDelegate>
{
    SFImageView *iconView;
    UILabel *nameLabel;
    UIImageView *redPointView;
    id delegate;
    QQWalletApp *_app;
    QQWalletFolder *_folder;
    _Bool _isFolder;
    _Bool _hasZipImags;
    _Bool _isFirstLineCell;
    _Bool _showSubTitle;
    UIImageView *markImageView;
    UIView *subTitleContainerView;
    UILabel *subTitleLabel1;
    UIImageView *triangleImageView;
    UIImageView *backgroundImageView;
    _Bool _isMoreFolder;
    long long _marketType;
    unsigned long long _drawBorder;
    NSMutableArray *_images;
    QQWalletImageDownloader *_downloader;
}

+ (struct CGSize)cellSize;
@property(retain, nonatomic) QQWalletImageDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long drawBorder; // @synthesize drawBorder=_drawBorder;
@property(nonatomic) _Bool isMoreFolder; // @synthesize isMoreFolder=_isMoreFolder;
@property(nonatomic) long long marketType; // @synthesize marketType=_marketType;
- (void).cxx_destruct;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)downloader:(id)arg1 didDownloadImage:(id)arg2 forURL:(id)arg3;
- (id)titleLabelContainerView;
- (void)setHighlighted:(_Bool)arg1;
- (void)downloadZipImages;
- (void)downloadServiceImages;
- (void)fillBackground;
- (id)getImageUrlArrayFromServiceId:(int)arg1;
- (void)setImageUrl:(id)arg1 forServiceId:(int)arg2;
- (id)triangleImageWithColor:(id)arg1;
- (void)setApp:(id)arg1;
- (void)setTriangeleViewHidden:(_Bool)arg1;
- (void)setRecommendApp:(id)arg1;
- (void)setService:(id)arg1;
- (void)configIconView;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

