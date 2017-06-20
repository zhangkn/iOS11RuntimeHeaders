/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSParagraphArbitrator : NSObject {
    NSAttributedString * _attributedString;
    double  _hyphenationFactor;
    unsigned long long  _lineBreakStrategy;
    id /* block */  _lineWidth;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _paragraphRange;
    long long  _typesetterBehavior;
    id /* block */  _validateLineBreakContext;
}

@property (retain) NSAttributedString *attributedString;
@property double hyphenationFactor;
@property unsigned long long lineBreakStrategy;
@property (copy) id /* block */ lineWidth;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } paragraphRange;
@property long long typesetterBehavior;
@property (copy) id /* block */ validateLineBreakContext;

+ (id)paragraphArbitratorWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)arg1;
- (id)attributedString;
- (void)dealloc;
- (double)hyphenationFactor;
- (id)init;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct { unsigned long long x1; unsigned long long x2; bool x3; })lineBreakContextBeforeIndex:(unsigned long long)arg1 lineFragmentWidth:(double)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)lineBreakStrategy;
- (id /* block */)lineWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphRange;
- (void)reset;
- (void)setAttributedString:(id)arg1;
- (void)setHyphenationFactor:(double)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setLineWidth:(id /* block */)arg1;
- (void)setParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTypesetterBehavior:(long long)arg1;
- (void)setValidateLineBreakContext:(id /* block */)arg1;
- (long long)typesetterBehavior;
- (id /* block */)validateLineBreakContext;

@end