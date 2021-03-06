//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KGShareViewControllerDelegate.h"
#import "SongImageLogicThreadDelegate.h"
#import "SongLyricDownLoadLogicThreadDelegate.h"

@class CALayer, KGThemeButton, KGThemeImageView, LyricViewMultiLine, NSArray, NSString, NSTimer, SongImageLogicThread, SongInfo, SongLyricDownLoadLogicThread, UIImageView, UILabel;

@interface KGRadarViewControllerSubView1 : UIView <SongImageLogicThreadDelegate, KGShareViewControllerDelegate, SongLyricDownLoadLogicThreadDelegate>
{
    UIView *_containView;
    KGThemeImageView *_bgImageView;
    UIImageView *_singerImageView;
    UIImageView *_singerMaskView;
    UILabel *_songNameLabel;
    UILabel *_singerNameLabel;
    UILabel *_finishTimeTips;
    KGThemeButton *_recognizeBtn;
    KGThemeButton *_downLoadBt;
    KGThemeButton *_addSongBtn;
    KGThemeButton *_shareBt;
    KGThemeButton *_showSingerBt;
    KGThemeButton *_loveBt;
    KGThemeButton *_playBt;
    LyricViewMultiLine *_multLineView;
    KGThemeButton *_moreResultBtn;
    SongImageLogicThread *_loadImageThread;
    SongLyricDownLoadLogicThread *_lyricLogicthread;
    NSTimer *_lyricTimer;
    _Bool _isPlayTheSong;
    long long _play_offset;
    double _timeInterval;
    CALayer *_shadowLayer;
    _Bool _bNeedSendBIForPlay;
    SongInfo *_song;
    NSString *_tongjiKey;
    id <KGRadarViewControllerSubViewDelegate> _delegate;
    NSArray *_songs;
}

@property(retain, nonatomic) NSArray *songs; // @synthesize songs=_songs;
@property(nonatomic) __weak KGThemeButton *recognizeBtn; // @synthesize recognizeBtn=_recognizeBtn;
@property(nonatomic) __weak UILabel *finishTimeTips; // @synthesize finishTimeTips=_finishTimeTips;
@property(nonatomic) __weak id <KGRadarViewControllerSubViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bNeedSendBIForPlay; // @synthesize bNeedSendBIForPlay=_bNeedSendBIForPlay;
@property(retain, nonatomic) NSString *tongjiKey; // @synthesize tongjiKey=_tongjiKey;
@property(retain, nonatomic) SongInfo *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)moreResultClick:(id)arg1;
- (id)crop:(id)arg1 WithRect:(struct CGSize)arg2;
- (void)viewDidDisplay;
- (void)viewWillDisplay;
- (void)SongLyricDownLoadLogicThread:(id)arg1 krcFileName:(id)arg2 andErrorCode:(int)arg3;
- (void)recognizeSong:(id)arg1;
- (id)isEQSettingOn;
- (void)ShowSingerEvent:(id)arg1;
- (void)userStatisticSend:(id)arg1 andMySpecailInfoCollecto:(id)arg2 andItem:(id)arg3;
- (_Bool)clickShareViewController:(id)arg1 withItem:(id)arg2;
- (void)shareComplete:(_Bool)arg1 AndErrorCode:(unsigned long long)arg2 AndErrorMsg:(id)arg3;
- (void)callShareController:(id)arg1;
- (void)addSong:(id)arg1;
- (void)ShareEvent:(id)arg1;
- (void)LoveEvent:(id)arg1;
- (void)DownLoadEvent:(id)arg1;
- (void)playSong;
- (void)showToMVAlertViewWithSonginfo:(id)arg1 withMessage:(id)arg2;
- (void)showAlertViewWithMessage:(id)arg1;
- (void)showToMVAlertViewWithSonginfo:(id)arg1;
- (void)requestUnpublicStatusWith:(id)arg1;
- (void)PlayEvent:(id)arg1;
- (void)playStateChange:(id)arg1;
- (void)isLoveSong;
- (void)myFavorListChange:(id)arg1;
- (void)SongImageLogicThread:(id)arg1 image:(id)arg2 andError:(int)arg3;
- (void)handleTimer:(id)arg1;
- (void)ReView;
- (void)updateSong:(id)arg1 playOffset:(long long)arg2;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

