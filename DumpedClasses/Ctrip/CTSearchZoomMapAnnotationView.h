//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTMapBaseAnnotationView.h"

@class CTVectorImageView, NSString, UIImageView, UILabel;

@interface CTSearchZoomMapAnnotationView : CTMapBaseAnnotationView
{
    NSString *_originalTitle;
    NSString *_title;
    NSString *_price;
    UIImageView *_bigBackGroundImageView;
    UIImageView *_arrowImageView;
    CTVectorImageView *_typeIcon;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CTVectorImageView *typeIcon; // @synthesize typeIcon=_typeIcon;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *bigBackGroundImageView; // @synthesize bigBackGroundImageView=_bigBackGroundImageView;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setInformationWithAnnotation:(id)arg1;
- (void)didAnnotationViewClick:(id)arg1;
- (void)initView;

@end
