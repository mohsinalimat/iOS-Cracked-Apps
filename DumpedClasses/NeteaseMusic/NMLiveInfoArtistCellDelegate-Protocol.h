//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMArtist, NMLiveInfoArtistCell;

@protocol NMLiveInfoArtistCellDelegate <NSObject>
- (void)liveInfoArtistCellNeedLogin:(NMLiveInfoArtistCell *)arg1;
- (void)liveInfoArtistCell:(NMLiveInfoArtistCell *)arg1 artistSelected:(NMArtist *)arg2;
@end

