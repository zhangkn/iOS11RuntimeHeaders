/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRenderListProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _configurationMutexQueue;
    bool  _configurationQueueAlwaysEmitsOriginalResult;
    struct opaqueCMFormatDescription { } * _mostRecentFormatDescription;
    NSObject<OS_dispatch_group> * _renderingGroup;
    BWPixelBufferPool * _renderingPool;
}

@property (nonatomic) bool alwaysEmitsOriginalResult;
@property (nonatomic, readonly) BWPixelBufferPool *renderingPool;

+ (void)initialize;

- (void)_continueRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 fromRendererNode:(/* Warning: unhandled struct encoding: '{BWRenderListRendererNode={?=^{BWRenderListRendererNode}}@}' */ struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; }*)arg3 parameterNode:(/* Warning: unhandled struct encoding: '{BWRenderListParameterNode={?=^{BWRenderListParameterNode}}@}' */ struct BWRenderListParameterNode { struct { struct BWRenderListParameterNode {} *x_1_1_1; } x1; id x2; }*)arg4 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg5 inputPixelBuffer:(struct __CVBuffer { }*)arg6 finalResultHandler:(id /* block */)arg7;
- (void)_emitProcessedSampleBufferFromRenderList:(id)arg1 result:(unsigned long long)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 processedPixelBuffer:(struct __CVBuffer { }*)arg4 finalResultHandler:(id /* block */)arg5;
- (void)_finishRenderingUsingRenderList:(id)arg1 result:(unsigned long long)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 processedPixelBuffer:(struct __CVBuffer { }*)arg4 finalResultHandler:(id /* block */)arg5;
- (void)_processRenderList:(id)arg1 parameterListProvider:(id)arg2 inputPixelBuffer:(struct __CVBuffer { }*)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 resultHandler:(id /* block */)arg5;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingRenderList:(id)arg2;
- (bool)alwaysEmitsOriginalResult;
- (void)dealloc;
- (id)init;
- (id)initWithRenderingPool:(id)arg1;
- (void)processRenderList:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 resultHandler:(id /* block */)arg4;
- (void)processRenderList:(id)arg1 withParameters:(id)arg2 inputPixelBuffer:(struct __CVBuffer { }*)arg3 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg4 resultHandler:(id /* block */)arg5;
- (id)renderingPool;
- (void)setAlwaysEmitsOriginalResult:(bool)arg1;
- (void)waitForAllProcessingToComplete;

@end
