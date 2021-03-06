//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage, UIColor;

@interface XYTKLabel : UILabel
{
    _Bool _isTouchMoved;
    UIColor *_selectedLinkBackgroundColor;
    CDUnknownBlockType _handleLinkTapHandler;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    struct _NSRange _selectedRange;
}

@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) _Bool isTouchMoved; // @synthesize isTouchMoved=_isTouchMoved;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(copy, nonatomic) CDUnknownBlockType handleLinkTapHandler; // @synthesize handleLinkTapHandler=_handleLinkTapHandler;
@property(copy, nonatomic) UIColor *selectedLinkBackgroundColor; // @synthesize selectedLinkBackgroundColor=_selectedLinkBackgroundColor;
- (void).cxx_destruct;
- (void)receivedActionForLinkType:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGPoint)calcGlyphsPositionInView;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)attributesFromProperties;
- (void)updateTextStoreWithAttributedString:(id)arg1;
- (void)updateTextStoreWithText;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setupTextSystem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

