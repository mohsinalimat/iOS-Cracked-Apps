//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CycleScrollViewCell : UIView
{
    long long _dataTag;
    UIView *_content;
    UILabel *_titleView;
}

@property(nonatomic) __weak UILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIView *content; // @synthesize content=_content;
@property(nonatomic) long long dataTag; // @synthesize dataTag=_dataTag;
- (void).cxx_destruct;
- (void)rotateContentWithAngle:(double)arg1 moveYoffset:(double)arg2 alpha:(double)arg3 scale:(double)arg4;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

