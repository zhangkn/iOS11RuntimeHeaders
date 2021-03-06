/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCTagRegistryICloudDataSource : NSObject {
    <DOCTagRegistryDelegate> * _delegate;
    NSObject * _iCloudToken;
    NSUbiquitousKeyValueStore * _store;
}

@property (nonatomic) <DOCTagRegistryDelegate> *delegate;
@property (nonatomic, retain) NSObject *iCloudToken;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *store;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (long long)iCloudTagSerialNumber;
- (long long)iCloudTagVersion;
- (id)iCloudTags;
- (id)iCloudTagsDictionary;
- (id)iCloudToken;
- (id)initWithDelegate:(id)arg1;
- (void)kvsStoreDidChange:(id)arg1;
- (void)readTagsFromCloud:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setICloudToken:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)synchronizeTagsToCloud;
- (void)ubiquityIdentityDidChange:(id)arg1;

@end
