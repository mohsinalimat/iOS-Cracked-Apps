//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NationModel : NSObject
{
    NSString *_nationality;
    NSString *_CName;
    NSString *_EName;
    NSString *_pyHead;
    long long _Priority;
    long long _nationID;
    NSString *_nationSCode;
    NSString *_nationCode;
    NSString *_nationName;
    NSString *_nationNameEN;
    NSString *_nationNamePY;
    NSString *_nationNameJP;
    NSString *_firstLetterEN;
    NSString *_firstLetterPY;
    long long _flag;
    long long _weightFlag;
}

@property(nonatomic) long long weightFlag; // @synthesize weightFlag=_weightFlag;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *firstLetterPY; // @synthesize firstLetterPY=_firstLetterPY;
@property(retain, nonatomic) NSString *firstLetterEN; // @synthesize firstLetterEN=_firstLetterEN;
@property(retain, nonatomic) NSString *nationNameJP; // @synthesize nationNameJP=_nationNameJP;
@property(retain, nonatomic) NSString *nationNamePY; // @synthesize nationNamePY=_nationNamePY;
@property(retain, nonatomic) NSString *nationNameEN; // @synthesize nationNameEN=_nationNameEN;
@property(retain, nonatomic) NSString *nationName; // @synthesize nationName=_nationName;
@property(retain, nonatomic) NSString *nationCode; // @synthesize nationCode=_nationCode;
@property(retain, nonatomic) NSString *nationSCode; // @synthesize nationSCode=_nationSCode;
@property(nonatomic) long long nationID; // @synthesize nationID=_nationID;
@property(nonatomic) long long Priority; // @synthesize Priority=_Priority;
@property(retain, nonatomic) NSString *pyHead; // @synthesize pyHead=_pyHead;
@property(retain, nonatomic) NSString *EName; // @synthesize EName=_EName;
@property(retain, nonatomic) NSString *CName; // @synthesize CName=_CName;
@property(retain, nonatomic) NSString *nationality; // @synthesize nationality=_nationality;
- (void).cxx_destruct;
- (id)init;

@end
