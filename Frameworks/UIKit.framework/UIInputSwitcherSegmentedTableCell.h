/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell {
    NSArray * _segmentImages;
    NSArray * _segmentTitles;
    long long  _selectedSegmentIndex;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (nonatomic, retain) NSArray *segmentImages;
@property (nonatomic, copy) NSArray *segmentTitles;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, retain) UIStackView *stackView;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (struct CGSize { double x1; double x2; })preferredSizeWithSegmentCount:(unsigned long long)arg1;

- (void)_populateSegmentViewsWithCount:(unsigned long long)arg1;
- (void)_removeAllSegmentViews;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (unsigned long long)numberOfSegments;
- (id)segmentImages;
- (id)segmentTitles;
- (long long)selectedSegmentIndex;
- (void)setSegmentImages:(id)arg1;
- (void)setSegmentTitles:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
