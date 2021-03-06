/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBatteryView : UIView {
    UIColor * _bodyColor;
    CAShapeLayer * _bodyLayer;
    double  _chargePercent;
    long long  _chargingState;
    UIColor * _fillColor;
    CALayer * _fillLayer;
    UIColor * _pinColor;
    CAShapeLayer * _pinLayer;
    bool  _saverModeActive;
    long long  _sizeCategory;
}

@property (nonatomic, copy) UIColor *bodyColor;
@property (nonatomic, retain) CAShapeLayer *bodyLayer;
@property (nonatomic) double chargePercent;
@property (nonatomic) long long chargingState;
@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, retain) CALayer *fillLayer;
@property (getter=isLowBattery, nonatomic, readonly) bool lowBattery;
@property (nonatomic, copy) UIColor *pinColor;
@property (nonatomic, retain) CAShapeLayer *pinLayer;
@property (nonatomic) bool saverModeActive;
@property (nonatomic) long long sizeCategory;

- (void).cxx_destruct;
- (id)_batteryColor;
- (struct CGSize { double x1; double x2; })_batterySizeForTraitCollection:(id)arg1;
- (void)_commonInit;
- (double)_insideCornerRadiusForTraitCollection:(id)arg1;
- (double)_lineWidthForTraitCollection:(id)arg1;
- (double)_marginForTraitCollection:(id)arg1;
- (double)_outsideCornerRadiusForTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })_pinSizeForTraitCollection:(id)arg1;
- (void)_updateBodyColors;
- (void)_updateFillColor;
- (void)_updateFillLayer;
- (id)bodyColor;
- (id)bodyLayer;
- (double)chargePercent;
- (long long)chargingState;
- (id)fillColor;
- (id)fillLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSizeCategory:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLowBattery;
- (void)layoutSubviews;
- (id)pinColor;
- (id)pinLayer;
- (bool)saverModeActive;
- (void)setBodyColor:(id)arg1;
- (void)setBodyLayer:(id)arg1;
- (void)setChargePercent:(double)arg1;
- (void)setChargingState:(long long)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillLayer:(id)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPinLayer:(id)arg1;
- (void)setSaverModeActive:(bool)arg1;
- (void)setSizeCategory:(long long)arg1;
- (long long)sizeCategory;
- (void)traitCollectionDidChange:(id)arg1;

@end
