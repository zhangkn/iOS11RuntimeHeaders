/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNActionsView : UIView <CNActionViewDelegate> {
    NSMutableDictionary * _actionItemsByType;
    NSMutableDictionary * _actionViewsByType;
    NSObject<CNActionsViewProtocol> * _actionsDelegate;
    bool  _shouldCompressLabelsToFitSize;
    NSArray * _sortedActionTypes;
    double  _spacing;
    CNUIContainerStackView * _stackView;
    long long  _style;
}

@property (nonatomic, retain) NSMutableDictionary *actionItemsByType;
@property (nonatomic, retain) NSMutableDictionary *actionViewsByType;
@property (nonatomic) NSObject<CNActionsViewProtocol> *actionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldCompressLabelsToFitSize;
@property (nonatomic, copy) NSArray *sortedActionTypes;
@property (nonatomic) double spacing;
@property (nonatomic, retain) CNUIContainerStackView *stackView;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionItemsByType;
- (id)actionViewForType:(id)arg1;
- (id)actionViewsByType;
- (id)actionsDelegate;
- (void)addActionItem:(id)arg1;
- (void)didMoveToWindow;
- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)insertionIndexForType:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)removeActionItem:(id)arg1;
- (void)resetActions;
- (void)setActionItemsByType:(id)arg1;
- (void)setActionViewsByType:(id)arg1;
- (void)setActionsDelegate:(id)arg1;
- (void)setShouldCompressLabelsToFitSize:(bool)arg1;
- (void)setSortedActionTypes:(id)arg1;
- (void)setSpacing:(double)arg1;
- (void)setStackView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldCalculateUpdatedTitleWidth;
- (bool)shouldCompressLabelsToFitSize;
- (id)sortedActionTypes;
- (double)spacing;
- (id)stackView;
- (long long)style;
- (void)updateActionItem:(id)arg1;

@end
