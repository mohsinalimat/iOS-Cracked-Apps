//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (UIImageDataExpress)
+ (id)clipImageByNormalSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2 innerGlow:(_Bool)arg3;
+ (id)clipImageByGoldenSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2 innerGlow:(_Bool)arg3;
+ (id)clipImageByGoldenSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2;
+ (id)chatBgImage:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)roundIconImageWith:(id)arg1 diameter:(double)arg2 stretch:(_Bool)arg3;
+ (_Bool)pix2Screen;
- (id)convertToGrayScale;
- (id)framesWithSize:(struct CGSize)arg1;
- (id)qlStateImage:(id)arg1;
- (id)scaleToSizeForDoodle:(struct CGSize)arg1;
- (id)qlScaleToSizeNoTransparent:(struct CGSize)arg1;
- (id)qlScalToSuitSizeWithMaxShortSide:(double)arg1 maxLongSide:(double)arg2;
- (id)qlScaleToSize:(struct CGSize)arg1;
- (id)linghtImage;
- (void)drawGrayImageInRect:(struct CGRect)arg1;
- (_Bool)isTransparentImage;
- (id)grayImage;
- (id)iconImageWithWidth:(double)arg1 cornerRadius:(double)arg2;
- (id)iconImageWithWidth:(double)arg1 cornerRadius:(double)arg2 border:(double)arg3 borderColor:(id)arg4;
- (_Bool)is3xScreen;
- (_Bool)is2xScreen;
@end

