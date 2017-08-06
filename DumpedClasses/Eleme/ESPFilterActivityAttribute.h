//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ESPFilterItem.h"

#import "ESPIconData.h"

@class NSString, UIColor;

@interface ESPFilterActivityAttribute : ESPFilterItem <ESPIconData>
{
    _Bool _isSoild;
    _Bool _isMarked;
    NSString *_iconName;
    NSString *_iconColorString;
    NSString *_ID;
    NSString *_descript;
}

+ (id)premiumAttribute;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isMarked; // @synthesize isMarked=_isMarked;
@property(copy, nonatomic) NSString *descript; // @synthesize descript=_descript;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *iconColorString; // @synthesize iconColorString=_iconColorString;
@property(nonatomic) _Bool isSoild; // @synthesize isSoild=_isSoild;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)filterValue;
- (id)filterKey;
- (_Bool)isMultiChoice;
@property(retain, nonatomic) UIColor *iconColor; // @dynamic iconColor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
