//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface TBIMMobileContactModel : NSObject
{
    id <TBIMMobileContactModelContext> _contactModelContext;
    NSString *_userId;
    NSURL *_logo;
    NSString *_name;
    NSString *_phone;
    NSString *_pinyin;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) id <TBIMMobileContactModelContext> contactModelContext; // @synthesize contactModelContext=_contactModelContext;
- (void).cxx_destruct;

@end

