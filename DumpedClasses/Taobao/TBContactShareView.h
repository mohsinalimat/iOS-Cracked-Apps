//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBContactShareItem;

@interface TBContactShareView : UIView
{
    TBContactShareItem *_shareItem;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _shareResultBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (id)contactShareViewWithItem:(id)arg1 tapBlock:(CDUnknownBlockType)arg2 shareResultBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType shareResultBlock; // @synthesize shareResultBlock=_shareResultBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) TBContactShareItem *shareItem; // @synthesize shareItem=_shareItem;
- (void).cxx_destruct;
- (id)accessRecentContacts;
- (void)setUpViewForContacts:(id)arg1;
- (void)presentContactGesture:(id)arg1;
- (void)setUpViewForContactChannel;
- (void)setUpViewWithConditons;
- (id)initWithItem:(id)arg1 tapBlock:(CDUnknownBlockType)arg2 shareResultBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;

@end

