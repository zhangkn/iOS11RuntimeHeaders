/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {
    GEOSearchAttributionManifest * _attributionManifest;
    NSLock * _attributionManifestLock;
    int  _attributionManifestUpdatedToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributionManifest;
- (void)_loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)init;
- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;

@end
