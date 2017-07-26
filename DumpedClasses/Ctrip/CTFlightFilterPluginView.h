//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFlightFilterPluginViewDelegate.h"

@class NSString;

@interface CTFlightFilterPluginView : UIView <CTFlightFilterPluginViewDelegate>
{
    long long _enterType;
    long long _filterPluginViewType;
}

@property(nonatomic) long long filterPluginViewType; // @synthesize filterPluginViewType=_filterPluginViewType;
@property(nonatomic) long long enterType; // @synthesize enterType=_enterType;
- (void)deleteItemWithDataID:(id)arg1 oldSelectedArray:(id)arg2;
- (void)deleteItemWithDataID:(id)arg1;
- (void)didselectTableView:(id)arg1 indexPath:(id)arg2 dataSource:(id)arg3 selectedModel:(id)arg4;
- (void)updateSelectedModelArray:(id)arg1;
- (void)resetWithDefaultValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
