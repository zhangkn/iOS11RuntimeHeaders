/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransaction : NSObject {
    <MRTransactionDelegate> * _delegate;
    unsigned long long  _name;
    void * _playerPath;
}

@property (nonatomic) <MRTransactionDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) void*playerPath;

+ (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2 toConnection:(id)arg3 forPlayerPath:(void*)arg4 completion:(id /* block */)arg5;

- (unsigned long long)_calculateMemory;
- (void)_processMessage:(id)arg1;
- (void)_query:(id)arg1;
- (void)_transactionEnded;
- (void)dealloc;
- (id)delegate;
- (id)initWithName:(unsigned long long)arg1 fromMessage:(id)arg2 withDelegate:(id)arg3;
- (id)initWithName:(unsigned long long)arg1 playerPath:(void*)arg2;
- (unsigned long long)name;
- (void*)playerPath;
- (void)send:(id)arg1 toConnection:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
