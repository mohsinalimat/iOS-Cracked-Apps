//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@interface FXMobileLiveClientV2RoomDao : FXBasisHttpDao
{
}

- (id)getStarLightListV2WithKugouId:(long long)arg1 rankingType:(long long)arg2 error:(id *)arg3;
- (id)getLastChatArrayWithRoonId:(long long)arg1 error:(id *)arg2;
- (id)getStarLightListWithStarKugouId:(long long)arg1 rankingType:(long long)arg2 starEvent:(long long)arg3 error:(id *)arg4;
- (id)getUserRelationshipInfo:(long long)arg1 streamType:(long long)arg2 error:(id *)arg3;
- (id)getRoomInfo:(long long)arg1 roomType:(long long)arg2 error:(id *)arg3;
- (id)getSocketInfo:(long long)arg1 roomType:(long long)arg2 unionId:(long long)arg3 error:(id *)arg4;
- (id)getVideoInfo:(long long)arg1 withLiveStreamType:(id)arg2 error:(id *)arg3;

@end

