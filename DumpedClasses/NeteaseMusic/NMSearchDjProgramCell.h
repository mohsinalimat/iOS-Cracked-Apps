//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSearchCell.h"

@class NMDjProgram, NSArray, UIImageView;

@interface NMSearchDjProgramCell : NMSearchCell
{
    NMDjProgram *_djProgram;
    NSArray *_keywords;
    UIImageView *_payMaskView;
}

+ (double)height;
@property(retain, nonatomic) NMDjProgram *djProgram; // @synthesize djProgram=_djProgram;
- (void).cxx_destruct;
- (void)handleChangeSkin:(id)arg1;
- (void)updateLabelColor;
- (void)setDjProgram:(id)arg1 keywords:(id)arg2;
- (void)setDjProgram:(id)arg1 keyword:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

