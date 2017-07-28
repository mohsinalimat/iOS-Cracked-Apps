//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString, UIColor;

@interface ESPDeliveryMode : NVMModel
{
    _Bool _isSolid;
    long long _ID;
    NSString *_iconText;
    UIColor *_color;
    NSString *_detailText;
    NSArray *_gradientColors;
    NSString *_gradientFromColorString;
    NSString *_gradientToColorString;
}

+ (id)colorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *gradientToColorString; // @synthesize gradientToColorString=_gradientToColorString;
@property(copy, nonatomic) NSString *gradientFromColorString; // @synthesize gradientFromColorString=_gradientFromColorString;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) _Bool isSolid; // @synthesize isSolid=_isSolid;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)dequeueImage;
- (id)deliveryModeImage;

@end
