/* Generated by RuntimeBrowser.
 */

@protocol BWRendererResourceProvider <NSObject>

@required

- (BWColorLookupCache *)provideColorLookupCache;
- (BWCoreImageFilterRenderer *)provideCoreImageFilterRenderer;
- (BWStillImageFgBgColorCubeRenderer *)provideMetalFilterRenderer;
- (BWStillImageMetalBlurMapRenderer *)provideStillImageMetalBlurMapRenderer;
- (BWStillImageMetalSDOFRenderer *)provideStillImageMetalSDOFRenderer;
- (BWStreamingCVAFilterRenderer *)provideStreamingCVAFilterRenderer;

@end
