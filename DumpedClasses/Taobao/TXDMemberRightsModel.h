//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TXDMemberRightsModel : TBJSONModel
{
    NSString *_icon;
    NSString *_title;
    NSString *_text;
    NSString *_actionText;
    NSString *_actionImg;
    NSString *_actionUrl;
    NSString *_backgroundColor;
    NSString *_url;
}

+ (id)jsonToModelKeyMapDictionary;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(copy, nonatomic) NSString *actionImg; // @synthesize actionImg=_actionImg;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
