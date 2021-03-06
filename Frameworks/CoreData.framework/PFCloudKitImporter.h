/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporter : NSObject <PFCloudKitSerializerDelegate> {
    NSPersistentStoreCoordinator * _coordinator;
    CKDatabase * _database;
    NSCKImportOperation * _importOperation;
    PFCloudKitStoreMonitor * _monitor;
    NSCloudKitMirroringDelegateOptions * _options;
    NSMutableArray * _resolvedRelationships;
    NSSQLCore * _store;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCKImportOperation *importOperation;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *monitor;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CKRecordZone *zone;

- (void).cxx_destruct;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (void)cloudKitSerializer:(id)arg1 resolvedPendingRelationship:(id)arg2;
- (id)coordinator;
- (id)database;
- (void)dealloc;
- (void)importIfNecessaryInTransaction:(id)arg1 onQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)importOperation;
- (id)init;
- (id)initWithOptions:(id)arg1 store:(id)arg2 zone:(id)arg3 andDatabase:(id)arg4;
- (id)monitor;
- (id)options;
- (void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4 completion:(id /* block */)arg5;
- (id)store;
- (id)zone;

@end
