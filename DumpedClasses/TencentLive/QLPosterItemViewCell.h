//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QLJCEPoster, QLSImageView;

@interface QLPosterItemViewCell : UICollectionViewCell
{
    QLJCEPoster *_poster;
    QLSImageView *_posterView;
}

@property(retain, nonatomic) QLSImageView *posterView; // @synthesize posterView=_posterView;
@property(retain, nonatomic) QLJCEPoster *poster; // @synthesize poster=_poster;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
