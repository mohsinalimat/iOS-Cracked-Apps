//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface SCarRegionInfoModel : TRBaseModel
{
    NSNumber<Optional> *_is_default;
    NSString<Optional> *_title;
    NSString<Optional> *_subtitle;
}

@property(copy, nonatomic) NSString<Optional> *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber<Optional> *is_default; // @synthesize is_default=_is_default;
- (void).cxx_destruct;

@end

