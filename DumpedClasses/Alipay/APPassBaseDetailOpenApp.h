//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPassDetailBaseData.h"

@class NSNumber, NSString;

@interface APPassBaseDetailOpenApp : APPassDetailBaseData
{
    NSString *_cellActionInfoAppId;
    NSString *_cellActionInfoIOSLaunch;
    NSNumber *_cellActionInfoNeedAuthorized;
}

@property(copy, nonatomic) NSNumber *cellActionInfoNeedAuthorized; // @synthesize cellActionInfoNeedAuthorized=_cellActionInfoNeedAuthorized;
@property(copy, nonatomic) NSString *cellActionInfoIOSLaunch; // @synthesize cellActionInfoIOSLaunch=_cellActionInfoIOSLaunch;
@property(copy, nonatomic) NSString *cellActionInfoAppId; // @synthesize cellActionInfoAppId=_cellActionInfoAppId;
- (void).cxx_destruct;
- (id)init;

@end
