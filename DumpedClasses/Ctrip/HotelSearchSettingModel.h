//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelSearchSettingModel : CTBusinessBean
{
    int _cityID;
    int _districtID;
    int _provinceID;
    NSString *_checkInDate;
    NSString *_checkOutDate;
}

@property(nonatomic) int provinceID; // @synthesize provinceID=_provinceID;
@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) int districtID; // @synthesize districtID=_districtID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

