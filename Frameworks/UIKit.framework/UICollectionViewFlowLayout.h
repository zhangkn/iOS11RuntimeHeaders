/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewFlowLayout : UICollectionViewLayout {
    NSMutableDictionary * _cachedItemAttributes;
    NSMutableDictionary * _cachedItemFrames;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLayoutSize;
    _UIFlowLayoutInfo * _data;
    NSMutableDictionary * _deletedItemsAttributesDict;
    NSMutableDictionary * _deletedSectionFootersAttributesDict;
    NSMutableDictionary * _deletedSectionHeadersAttributesDict;
    struct CGSize { 
        double width; 
        double height; 
    }  _estimatedItemSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _footerReferenceSize;
    struct { 
        unsigned int delegateSizeForItem : 1; 
        unsigned int delegateReferenceSizeForHeader : 1; 
        unsigned int delegateReferenceSizeForFooter : 1; 
        unsigned int delegateInsetForSection : 1; 
        unsigned int delegateInteritemSpacingForSection : 1; 
        unsigned int delegateLineSpacingForSection : 1; 
        unsigned int delegateAlignmentOptions : 1; 
        unsigned int layoutDataIsValid : 1; 
        unsigned int delegateInfoIsValid : 1; 
        unsigned int roundsToScreenScale : 1; 
        unsigned int delegateSizesForSection : 1; 
        unsigned int sectionHeadersFloat : 1; 
        unsigned int sectionFootersFloat : 1; 
        unsigned int headerFollowsSectionMargins : 1; 
        unsigned int footerFollowsSectionMargins : 1; 
    }  _gridLayoutFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerReferenceSize;
    NSMutableArray * _indexPathsToValidate;
    NSMutableDictionary * _insertedItemsAttributesDict;
    NSMutableDictionary * _insertedSectionFootersAttributesDict;
    NSMutableDictionary * _insertedSectionHeadersAttributesDict;
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _lineSpacing;
    NSDictionary * _rowAlignmentsOptionsDictionary;
    long long  _scrollDirection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
}

@property (nonatomic) struct CGSize { double x1; double x2; } estimatedItemSize;
@property (getter=_estimatesSizes, nonatomic, readonly) bool estimatesSizes;
@property (nonatomic) struct CGSize { double x1; double x2; } footerReferenceSize;
@property (nonatomic) struct CGSize { double x1; double x2; } headerReferenceSize;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) bool sectionFootersPinToVisibleBounds;
@property (nonatomic) bool sectionHeadersPinToVisibleBounds;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (bool)_boundsAndInsetsAreValidForReferenceDimension;
- (void)_calculateAttributesForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToSection:(long long)arg1;
- (double)_dimensionFromCollectionView;
- (struct CGSize { double x1; double x2; })_effectiveEstimatedItemSize;
- (bool)_estimatesSizes;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_fastScrollingIndexBarInsets;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_footerFollowsSectionMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (void)_getSizingInfosWithExistingSizingDictionary:(id)arg1;
- (bool)_headerFollowsSectionMargins;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetCachedItems;
- (bool)_roundsToScreenScale;
- (id)_rowAlignmentOptions;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (void)_setFooterFollowsSectionMargins:(bool)arg1;
- (void)_setHeaderFollowsSectionMargins:(bool)arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)_setRoundsToScreenScale:(bool)arg1;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (void)_updateDelegateFlags;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allowsPartialUpdate:(bool)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (long long)developmentLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })estimatedItemSize;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize { double x1; double x2; })footerReferenceSize;
- (struct CGSize { double x1; double x2; })headerReferenceSize;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)prepareLayout;
- (long long)scrollDirection;
- (bool)sectionFootersPinToVisibleBounds;
- (bool)sectionHeadersPinToVisibleBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setEstimatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFooterReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setMinimumLineSpacing:(double)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSectionFootersPinToVisibleBounds:(bool)arg1;
- (void)setSectionHeadersPinToVisibleBounds:(bool)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })synchronizeLayout;

@end