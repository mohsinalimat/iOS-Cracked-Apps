//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiDiWalkParam, ONESBaseMapEntrance;

@protocol DiDiWalkNavProxy <NSObject>
- (void)stopPollWalkNavigation;
- (void)startAndPollWalkNavigationWithStartPointParam:(DiDiWalkParam *)arg1 endPointCoor:(struct CLLocationCoordinate2D)arg2 mapEntrance:(ONESBaseMapEntrance *)arg3 finish:(void (^)(DiDiWalkResult *, NSError *))arg4;
@end

