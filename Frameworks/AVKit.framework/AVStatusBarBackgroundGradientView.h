/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVStatusBarBackgroundGradientView : UIView {
    double  _gradientOpacity;
    bool  _showsGradientWhenUnderlappingStatusBar;
}

@property (nonatomic) double gradientOpacity;
@property (nonatomic) bool showsGradientWhenUnderlappingStatusBar;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateGradientOpacityIfNeeded;
- (double)gradientOpacity;
- (id)init;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setGradientOpacity:(double)arg1;
- (void)setShowsGradientWhenUnderlappingStatusBar:(bool)arg1;
- (bool)showsGradientWhenUnderlappingStatusBar;

@end
