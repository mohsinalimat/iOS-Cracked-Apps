//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor, UIControl;

@interface KFUnderlineLabel : UILabel
{
    UIControl *_actionView;
    UIColor *_preColor;
}

@property(retain, nonatomic) UIColor *preColor; // @synthesize preColor=_preColor;
@property(retain, nonatomic) UIControl *actionView; // @synthesize actionView=_actionView;
- (void).cxx_destruct;
- (void)removeHighlightedColor;
- (void)appendHighlightedColor;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setup;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

