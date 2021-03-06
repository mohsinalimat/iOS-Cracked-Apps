//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CADisplayLink;

@interface QQProgressLabel : UILabel
{
    float _progress;
    float _displayProgress;
    float _progressStep;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) float progressStep; // @synthesize progressStep=_progressStep;
@property(nonatomic) float displayProgress; // @synthesize displayProgress=_displayProgress;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)cancelAnimation;
- (void)performUpdate:(id)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end

