//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, UIColor, UIFont, UIImage;

@interface DCUIRichViewModel : NSObject
{
    UIImage *_image;
    NSString *_imageUri;
    NSString *_text;
    UIFont *_textFont;
    UIColor *_textColor;
    NSAttributedString *_attrText;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_backgrondColor;
    double _cornerRadius;
}

+ (id)modelsWithCarInfoModel:(id)arg1;
+ (id)modelsWithStrings:(id)arg1;
+ (id)modelsWithNoteInfoAPiModes:(id)arg1;
+ (id)modelsWithColorApiModels:(id)arg1;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *backgrondColor; // @synthesize backgrondColor=_backgrondColor;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) NSAttributedString *attrText; // @synthesize attrText=_attrText;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *imageUri; // @synthesize imageUri=_imageUri;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasBorder;
@property(readonly, nonatomic) _Bool hasBackgrondColor;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly, nonatomic) _Bool hasImage;

@end

