//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVOpusBaseHandle.h"

#import "KTVOpusUploadHandleProtocol.h"
#import "KTV_FileUploadManagerDelegate.h"

@class KTVUploadFileInfo, KTV_FileUploadManager, KTV_PrepareUploadFileInfo, NSData, NSString;

@interface KTVOpusUploadHandle : KTVOpusBaseHandle <KTVOpusUploadHandleProtocol, KTV_FileUploadManagerDelegate>
{
    _Bool _isSound;
    int _curRetryTime;
    KTV_PrepareUploadFileInfo *_preSoundUploadInfo;
    KTV_FileUploadManager *_uploadMgr;
    KTVUploadFileInfo *_info;
    NSData *_curFileData;
}

@property(nonatomic) int curRetryTime; // @synthesize curRetryTime=_curRetryTime;
@property(retain, nonatomic) NSData *curFileData; // @synthesize curFileData=_curFileData;
@property(retain, nonatomic) KTVUploadFileInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) KTV_FileUploadManager *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) KTV_PrepareUploadFileInfo *preSoundUploadInfo; // @synthesize preSoundUploadInfo=_preSoundUploadInfo;
@property(nonatomic) _Bool isSound; // @synthesize isSound=_isSound;
- (void).cxx_destruct;
- (void)successWithPrepareUploadFileInfo:(id)arg1;
- (void)resetFragmentSize;
- (void)startUploadWithFileMd5:(id)arg1 fileType:(int)arg2 fileExt:(id)arg3 fileData:(id)arg4;
- (_Bool)updateWithProgress:(float)arg1 savePath:(id)arg2 completePath:(id)arg3 isSound:(_Bool)arg4;
- (_Bool)updateWithLocalWorksInfo:(id)arg1 Progress:(float)arg2;
- (void)uploadFailed:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)uploadSuccessed:(id)arg1 withUrl:(id)arg2;
- (void)reStart;
- (void)pause;
- (void)cancel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

