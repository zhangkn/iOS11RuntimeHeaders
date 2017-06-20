/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODataSessionTaskRequesterOp : _GEOServiceRequesterOp <GEOProtobufSessionTaskDelegate> {
    bool  _canceled;
    int  _dataRequestKind;
    GEOProtobufSessionTask * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)cancel;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 urlType:(unsigned long long)arg3 additionalURLQueryItems:(id)arg4 additionalHTTPHeaders:(id)arg5 debugRequestName:(id)arg6 serviceType:(id)arg7 experimentType:(long long)arg8 experimentDispatcherRequestType:(int)arg9 timeout:(double)arg10 shouldThrottleRequests:(bool)arg11 throttleKey:(id)arg12 dataRequestKind:(int)arg13 traits:(id)arg14;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end