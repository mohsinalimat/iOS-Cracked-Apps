//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBRecmdConfiguration : NSObject
{
    _Bool _isNeedExtendBtn;
    NSMutableDictionary *_extendBtnImages;
    _Bool _isNeedBrandIcon;
    _Bool _hideLoadMoreView;
    NSString *_loadMoreTitle;
    NSString *_loadMoreErrorTitle;
    NSString *_extendToast;
    NSString *_headerTitle;
    NSString *_headerSubTitle;
    NSString *_headerIconImgURL;
}

+ (id)defaultConfiguration;
+ (id)configWithSourceChannel:(id)arg1;
@property(nonatomic) _Bool hideLoadMoreView; // @synthesize hideLoadMoreView=_hideLoadMoreView;
@property(retain, nonatomic) NSString *headerIconImgURL; // @synthesize headerIconImgURL=_headerIconImgURL;
@property(retain, nonatomic) NSString *headerSubTitle; // @synthesize headerSubTitle=_headerSubTitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(copy, nonatomic) NSString *extendToast; // @synthesize extendToast=_extendToast;
@property(copy, nonatomic) NSString *loadMoreErrorTitle; // @synthesize loadMoreErrorTitle=_loadMoreErrorTitle;
@property(copy, nonatomic) NSString *loadMoreTitle; // @synthesize loadMoreTitle=_loadMoreTitle;
- (void).cxx_destruct;
@property(nonatomic) double containerWidth;
@property(retain, nonatomic) NSMutableDictionary *extendBtnImages;
@property(nonatomic) _Bool isNeedExtendBtn;

@end

