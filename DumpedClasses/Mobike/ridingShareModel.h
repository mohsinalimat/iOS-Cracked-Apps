//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_Model.h"

#import "NSCoding.h"

@class NSString;

@interface ridingShareModel : Mobike_Model <NSCoding>
{
    NSString *_shareTitle;
    NSString *_shareContent;
    NSString *_shareImageUrl;
}

@property(retain) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(retain) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

