//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSx_GMPDriveaboutFeatureMetadata;

@interface GMSRenderOpInfo : NSObject
{
    unsigned long long _serverRenderOpIndex;
    GMSx_GMPDriveaboutFeatureMetadata *_featureMetadata;
    int _zGrade;
    unsigned int _zWithinGrade;
}

- (void).cxx_destruct;
- (id)featureMetadata;
- (unsigned int)zWithinGrade;
- (int)zGrade;
- (unsigned long long)serverRenderOpIndex;
- (id)initWithServerRenderOpIndex:(unsigned long long)arg1 featureMetadata:(id)arg2 zGrade:(int)arg3 zWithinGrade:(unsigned int)arg4;
- (id)init;

@end

