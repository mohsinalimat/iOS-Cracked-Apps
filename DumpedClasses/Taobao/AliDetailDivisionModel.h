//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class AliDetailDivisionStyleModel, NSString;

@interface AliDetailDivisionModel : AliDetailComponentModel
{
    _Bool _useTheme;
    AliDetailDivisionStyleModel *_styleModel;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool useTheme; // @synthesize useTheme=_useTheme;
@property(retain, nonatomic) AliDetailDivisionStyleModel *styleModel; // @synthesize styleModel=_styleModel;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;
- (_Bool)forceBindData;

@end

