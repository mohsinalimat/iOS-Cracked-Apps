//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QZDrawItemInteractionRect, QzoneFeedDetailCell, QzoneFeedModel;

@interface QZFeedDetailCommentAccessibilityElement : UIView
{
    QZDrawItemInteractionRect *_interaction;
    QzoneFeedDetailCell *_detailCell;
    QzoneFeedModel *_feedModel;
}

@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
@property(nonatomic) __weak QzoneFeedDetailCell *detailCell; // @synthesize detailCell=_detailCell;
@property(retain, nonatomic) QZDrawItemInteractionRect *interaction; // @synthesize interaction=_interaction;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;

@end
