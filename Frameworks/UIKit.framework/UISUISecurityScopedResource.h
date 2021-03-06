/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding> {
    long long  _allowedAccess;
    bool  _hasActiveAccessAssertion;
    NSData * _sandboxExtensionData;
    long long  _underlyingSandboxAssertionHandle;
    NSURL * _url;
}

@property (nonatomic) long long allowedAccess;
@property (nonatomic) bool hasActiveAccessAssertion;
@property (nonatomic, retain) NSData *sandboxExtensionData;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (nonatomic) long long underlyingSandboxAssertionHandle;
@property (nonatomic, readonly) NSURL *url;

+ (id)_sandboxExtensionClassForAllowedAccess:(long long)arg1;
+ (id)_sandboxExtensionDataForURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (id)readonlySandboxExtensionClassString;
+ (id)readwriteSandboxExtensionClassString;
+ (id)scopedResourceWithAbsolutePath:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourceWithFileURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourceWithURL:(id)arg1 allowedAccess:(long long)arg2;
+ (id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg1 traversalStopPaths:(id)arg2 allowedAccess:(long long)arg3;
+ (bool)supportsSecureCoding;
+ (id)uniquedSecurityScopedResources:(id)arg1;

- (void).cxx_destruct;
- (bool)_isEqualAccessToSecurityScopedResource:(id)arg1;
- (long long)allowedAccess;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasActiveAccessAssertion;
- (id)initWithAbsoluteURL:(id)arg1 sandboxExtensionData:(id)arg2 allowedAccess:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionData;
- (void)setAllowedAccess:(long long)arg1;
- (void)setHasActiveAccessAssertion:(bool)arg1;
- (void)setSandboxExtensionData:(id)arg1;
- (void)setUnderlyingSandboxAssertionHandle:(long long)arg1;
- (bool)sourceIsManaged;
- (void)startAccessing;
- (void)stopAccessing;
- (long long)underlyingSandboxAssertionHandle;
- (id)url;

@end
