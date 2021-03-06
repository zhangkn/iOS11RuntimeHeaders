/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface DAESource : NSObject {
    long long  _accessorCount;
    long long  _accessorStride;
    long long  _count;
    float * _floatArray;
    int * _intArray;
}

@property (nonatomic) long long accessorCount;
@property (nonatomic) long long accessorStride;
@property (nonatomic) long long count;
@property (nonatomic) float*floatArray;
@property (nonatomic) int*intArray;

- (long long)accessorCount;
- (long long)accessorStride;
- (long long)count;
- (void)dealloc;
- (float*)floatArray;
- (int*)intArray;
- (void)setAccessorCount:(long long)arg1;
- (void)setAccessorStride:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)setFloatArray:(float*)arg1;
- (void)setIntArray:(int*)arg1;

@end
