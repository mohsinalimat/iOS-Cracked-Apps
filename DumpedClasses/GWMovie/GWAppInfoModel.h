//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWAppInfoModel : GWObject
{
    NSString *name;
    NSString *appsize;
    NSString *appurl;
    NSString *logo;
    NSString *appversion;
    NSString *appdesc;
}

@property(copy, nonatomic) NSString *appdesc; // @synthesize appdesc;
@property(copy, nonatomic) NSString *appversion; // @synthesize appversion;
@property(copy, nonatomic) NSString *logo; // @synthesize logo;
@property(copy, nonatomic) NSString *appurl; // @synthesize appurl;
@property(copy, nonatomic) NSString *appsize; // @synthesize appsize;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)dealloc;

@end
