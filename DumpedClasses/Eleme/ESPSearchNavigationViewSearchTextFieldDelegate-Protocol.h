//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESPSearchNavigationView, NSString;

@protocol ESPSearchNavigationViewSearchTextFieldDelegate <NSObject>
- (void)searchNavigationView:(ESPSearchNavigationView *)arg1 didBecomeActive:(_Bool)arg2;
- (void)searchNavigationView:(ESPSearchNavigationView *)arg1 searchTextDidChange:(NSString *)arg2;
- (void)searchNavigationView:(ESPSearchNavigationView *)arg1 searchButtonClickedWithSearchText:(NSString *)arg2 placeholder:(NSString *)arg3;
@end
