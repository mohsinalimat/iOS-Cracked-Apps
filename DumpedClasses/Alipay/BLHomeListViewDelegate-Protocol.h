//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIScrollView, UIView;

@protocol BLHomeListViewDelegate <NSObject>
- (_Bool)nextPagePullViewIsLoading;
- (void)nextPagePullViewDidRefresh;

@optional
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)didSelectSection:(UIView *)arg1;
- (void)didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)deleteRowAtIndexPath:(NSIndexPath *)arg1;
@end

