//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQXMLMessageBaseView.h"

@class UILabel;

@interface QQXMLRichMessageMailTypeCellView : QQXMLMessageBaseView
{
    UILabel *_senderNameLabel;
    UILabel *_mailTitleLabel;
    UILabel *_timeLabel;
    UILabel *_contentLabel;
}

+ (int)getCellHeight:(id)arg1;
+ (id)getContentFromXMLMessageItem:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setMailTitle:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setTime:(int)arg1;
- (void)layoutSubviews;
- (void)setXMLMessage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

