/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionReusableView : UIView <DebugHierarchyObject> {
    UICollectionView * _collectionView;
    UICollectionViewLayoutAttributes * _layoutAttributes;
    bool  _preferredAttributesValid;
    struct { 
        unsigned int wasDequeued : 1; 
        unsigned int preferredAttributesValid : 1; 
        unsigned int generatingPreferredAttributes : 1; 
    }  _reusableViewFlags;
    NSString * _reuseIdentifier;
    long long  _updateAnimationCount;
}

@property (getter=_collectionView, setter=_setCollectionView:, nonatomic) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isInUpdateAnimation, nonatomic, readonly) bool inUpdateAnimation;
@property (getter=_layoutAttributes, setter=_setLayoutAttributes:, nonatomic, copy) UICollectionViewLayoutAttributes *layoutAttributes;
@property (getter=_arePreferredAttributesValid, nonatomic) bool preferredAttributesValid;
@property (setter=_setReuseIdentifier:, nonatomic, copy) NSString *reuseIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_addUpdateAnimation;
- (bool)_arePreferredAttributesValid;
- (void)_clearUpdateAnimation;
- (id)_collectionView;
- (bool)_disableRasterizeInAnimations;
- (void)_invalidatePreferredAttributes;
- (bool)_isInUpdateAnimation;
- (id)_layoutAttributes;
- (void)_markAsDequeued;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setReuseIdentifier:(id)arg1;
- (bool)_wasDequeued;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)canBeEdited;
- (id)debugHierarchyPropertyDescriptions;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEditing;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)setEditing:(bool)arg1;
- (void)setPreferredAttributesValid:(bool)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
