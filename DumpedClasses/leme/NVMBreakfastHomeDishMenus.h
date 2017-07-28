//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSMutableArray, NSString, NVMBreakfastDateViewModel, NVMBreakfastDayDish;

@interface NVMBreakfastHomeDishMenus : NSObject
{
    _Bool _holiday;
    _Bool _promotion;
    _Bool _hasGift;
    _Bool _timeout;
    _Bool _hasSelected;
    _Bool _isDeadline;
    NSString *_date;
    NSString *_day;
    NSString *_holidayDesc;
    NSString *_holdayPic;
    long long _sellingDate;
    NSMutableArray *_options;
    NSMutableArray *_category;
    NVMBreakfastDayDish *_gitfDish;
    NSString *_deadLineTime;
    NSIndexPath *_indexPath;
    NVMBreakfastDateViewModel *_dateViewModel;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NVMBreakfastDateViewModel *dateViewModel; // @synthesize dateViewModel=_dateViewModel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *deadLineTime; // @synthesize deadLineTime=_deadLineTime;
@property(nonatomic) _Bool isDeadline; // @synthesize isDeadline=_isDeadline;
@property(retain, nonatomic) NVMBreakfastDayDish *gitfDish; // @synthesize gitfDish=_gitfDish;
@property(retain, nonatomic) NSMutableArray *category; // @synthesize category=_category;
@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
@property(nonatomic) _Bool hasSelected; // @synthesize hasSelected=_hasSelected;
@property(nonatomic) _Bool timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long sellingDate; // @synthesize sellingDate=_sellingDate;
@property(copy, nonatomic) NSString *holdayPic; // @synthesize holdayPic=_holdayPic;
@property(copy, nonatomic) NSString *holidayDesc; // @synthesize holidayDesc=_holidayDesc;
@property(nonatomic) _Bool hasGift; // @synthesize hasGift=_hasGift;
@property(nonatomic) _Bool promotion; // @synthesize promotion=_promotion;
@property(nonatomic) _Bool holiday; // @synthesize holiday=_holiday;
@property(copy, nonatomic) NSString *day; // @synthesize day=_day;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end
