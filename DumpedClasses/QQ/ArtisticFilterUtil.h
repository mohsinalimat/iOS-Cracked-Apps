//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ArtisticFilterUtil : NSObject
{
}

+ (_Bool)dateHasOver:(id)arg1 second:(long long)arg2;
+ (id)getCunrrentTimeStamp;
+ (id)getLocalArtisticFilterPic:(id)arg1 artisticFilter:(id)arg2;
+ (id)getCurrentTimeStampString:(id)arg1;
+ (id)getSessionID:(id)arg1;
+ (id)getTempPathByFilename:(id)arg1;
+ (_Bool)checkHasFileInTempPath:(id)arg1;
+ (void)deleteTempContentFileInDir:(id)arg1;
+ (id)getPicSavePath:(id)arg1;
+ (id)getOriginalPicSavePath;
+ (id)getScalePicSavePath;
+ (_Bool)savePicToPath:(id)arg1 Path:(id)arg2;
+ (_Bool)isBlankString:(id)arg1;

@end

