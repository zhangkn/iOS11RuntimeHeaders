/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INNote : NSObject <INCacheableContainer, NSCopying, NSSecureCoding> {
    NSArray * _contents;
    NSDateComponents * _createdDateComponents;
    NSString * _groupName;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    NSString * _title;
}

@property (readonly, copy) NSArray *contents;
@property (readonly, copy) NSDateComponents *createdDateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSDateComponents *modifiedDateComponents;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)cacheableObjects;
- (id)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (id)title;

@end
