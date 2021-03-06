/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    double  _timeout;
}

- (int)dataRequestKindForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)initWithTimeout:(double)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (id)serviceTypeNumber;
- (bool)shouldThrottleRequests;
- (double)timeout;
- (unsigned long long)urlType;

@end
