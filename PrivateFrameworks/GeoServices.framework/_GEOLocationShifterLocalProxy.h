/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> * _queue;
    _GEOLocationShiftRequester * _requester;
    int  _resetPrivacyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOLocationShifterPersistence *persistentCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doNetworkRequestForCoordinate:(struct { double x1; double x2; })arg1 traits:(id)arg2 shouldCache:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_prunePersistentCache;
- (void)dealloc;
- (id)init;
- (id)persistentCache;
- (void)shiftCoordinate:(struct { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;

@end
