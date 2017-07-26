//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, UIImage;

@interface TBIMAreetingCardViewModel : TBJSONModel
{
    _Bool _needLine;
    _Bool _showFloatCloud;
    NSString *_cardName;
    NSString *_cardTemplete;
    NSString *_cardType;
    NSString *_defaultPic;
    NSString *_nativePic;
    NSString *_defaultTitle;
    NSString *_defaultName;
    UIImage *_tempImage;
    NSString *_tempLocalPath;
    CDUnknownBlockType _areetingCardTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType areetingCardTapBlock; // @synthesize areetingCardTapBlock=_areetingCardTapBlock;
@property(nonatomic) _Bool showFloatCloud; // @synthesize showFloatCloud=_showFloatCloud;
@property(nonatomic) _Bool needLine; // @synthesize needLine=_needLine;
@property(copy, nonatomic) NSString *tempLocalPath; // @synthesize tempLocalPath=_tempLocalPath;
@property(retain, nonatomic) UIImage *tempImage; // @synthesize tempImage=_tempImage;
@property(copy, nonatomic) NSString *defaultName; // @synthesize defaultName=_defaultName;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(copy, nonatomic) NSString *nativePic; // @synthesize nativePic=_nativePic;
@property(copy, nonatomic) NSString *defaultPic; // @synthesize defaultPic=_defaultPic;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *cardTemplete; // @synthesize cardTemplete=_cardTemplete;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
- (void).cxx_destruct;

@end
