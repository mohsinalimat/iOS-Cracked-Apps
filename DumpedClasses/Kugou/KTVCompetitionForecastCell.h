//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeImageView, KGThemeLabel, KGThemeView, NSString;

@interface KTVCompetitionForecastCell : KFCommedTableViewCell
{
    KGThemeLabel *_contentLabel;
    KGThemeImageView *_arrowImageView;
    NSString *_content;
    KGThemeView *_topSeparator;
}

+ (double)cellHeight;
@property(retain, nonatomic) KGThemeView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) KGThemeImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) KGThemeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
