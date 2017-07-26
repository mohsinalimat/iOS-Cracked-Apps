//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichPTVGLProgramBase.h"

@class MCTmplItem, NSArray, NSObject<QQRichPTVGLProgramCommonDelegate>;

@interface QQRichGLProgramFaceCrop : QQRichPTVGLProgramBase
{
    unsigned int _srcFaceVerticesVBO;
    unsigned int _srcFaceTexCoordsVBO;
    float *quadVertexCoord;
    float *quadFragmentCoord;
    unsigned int _outputTexture;
    unsigned int _grayTexture;
    MCTmplItem *_tmplItem;
    NSArray *_faceAnalyzers;
    NSObject<QQRichPTVGLProgramCommonDelegate> *_delegate;
    struct CGSize _outputSize;
}

@property(nonatomic) unsigned int grayTexture; // @synthesize grayTexture=_grayTexture;
@property(nonatomic) NSObject<QQRichPTVGLProgramCommonDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) unsigned int outputTexture; // @synthesize outputTexture=_outputTexture;
@property(retain, nonatomic) NSArray *faceAnalyzers; // @synthesize faceAnalyzers=_faceAnalyzers;
@property(retain, nonatomic) MCTmplItem *tmplItem; // @synthesize tmplItem=_tmplItem;
- (void)setupFaceCropVBO;
- (void)renderWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2;
- (id)complementedForeheadPoints:(float (*)[2])arg1;
- (void)dealloc;
- (void)clearBufferObjects;
- (void)registerUniforms;
- (void)registerVertexAttributes;
- (void)setupEnviroment;
- (void)setupBufferObjects;
- (id)initWithVertexShaderFromFile:(id)arg1 fragmentShaderFromFile:(id)arg2;

@end
