//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseTableViewCell.h"

@class FMImageView, UIImageView, UILabel;

@interface FMMyCityMoreFishpondCell : FMBaseTableViewCell
{
    FMImageView *_imageView;
    UILabel *_pondName;
    UILabel *_subTitle;
    UILabel *_subTitle1;
    UILabel *_rightTitle;
    UIImageView *_checkBoxImageView;
    UIImageView *_silenceImageView;
    long long _fishpondListType;
}

@property(nonatomic) long long fishpondListType; // @synthesize fishpondListType=_fishpondListType;
- (void).cxx_destruct;
- (void)setItemDO:(id)arg1 selectFishpondId:(id)arg2;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

