//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface ExploreEmbedListBaseModel : NSObject <NSCoding>
{
    NSNumber *_cellType;
    NSNumber *_uniqueID;
    NSNumber *_orderIndex;
    double _behotTime;
    NSNumber *_showDislike;
    NSString *_categoryID;
    NSString *_concernID;
    unsigned long long _nextCellType;
    unsigned long long _preCellType;
}

@property(nonatomic) unsigned long long preCellType; // @synthesize preCellType=_preCellType;
@property(nonatomic) unsigned long long nextCellType; // @synthesize nextCellType=_nextCellType;
@property(retain, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSNumber *showDislike; // @synthesize showDislike=_showDislike;
@property(nonatomic) double behotTime; // @synthesize behotTime=_behotTime;
@property(retain, nonatomic) NSNumber *orderIndex; // @synthesize orderIndex=_orderIndex;
@property(retain, nonatomic) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSNumber *cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

