//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CTFlight)
- (id)base64DecodedString;
- (id)trim;
- (_Bool)isMobileNumberTrueWithBlank;
- (id)join:(id)arg1 withLength:(id)arg2;
- (struct CGSize)ctSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)ctSizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)ctSizeWithFont:(id)arg1;
- (struct CGSize)boundingRectWithSize:(struct CGSize)arg1 withTextFont:(id)arg2 withLineSpacing:(double)arg3;
- (id)attributedStringFromStingWithFont:(id)arg1 withLineSpacing:(double)arg2;
- (_Bool)isYearMonthDayValidInIDCardNumber;
@end
