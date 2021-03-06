/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPItemID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domainIdentifier;
    NSString * _identifier;
    NSString * _providerIdentifier;
}

@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *providerIdentifier;

+ (id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemID:(id)arg1;
- (id)providerIdentifier;

@end
