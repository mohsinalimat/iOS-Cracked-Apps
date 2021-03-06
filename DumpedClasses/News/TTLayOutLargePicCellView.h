//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTLayOutCellViewBase.h"

#import "ExploreMovieViewCellProtocol.h"
#import "TTSharedViewTransitionFrom.h"

@class NSString;

@interface TTLayOutLargePicCellView : TTLayOutCellViewBase <ExploreMovieViewCellProtocol, TTSharedViewTransitionFrom>
{
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
- (id)animationFromImage;
- (id)animationFromView;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (void)refreshUI;
- (struct CGRect)movieViewFrameRect;
- (struct CGRect)logoViewFrame;
- (void)attachMovieView:(id)arg1;
- (id)detachMovieView;
- (_Bool)hasMovieView;
- (_Bool)isMovieFullScreen;
- (_Bool)isPlayingMovie;
- (void)stopMovieViewPlayWithoutRemoveMovieView:(id)arg1;
- (void)stopMovieViewPlay:(id)arg1;
- (void)movieViewPlayFinished:(id)arg1;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)didEndDisplaying;
- (void)invalideMovieView;
- (void)removeMovieViewNotification;
- (void)registerMovieViewNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

