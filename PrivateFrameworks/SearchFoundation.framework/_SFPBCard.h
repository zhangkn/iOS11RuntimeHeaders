/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBCard : PBCodable <NSSecureCoding, _SFPBCard> {
    NSString * _cardId;
    NSArray * _cardSections;
    NSString * _contextReferenceIdentifier;
    NSArray * _dismissalCommands;
    NSData * _entityIdentifier;
    struct { 
        unsigned int type : 1; 
        unsigned int source : 1; 
    }  _has;
    NSData * _intentMessageData;
    NSString * _intentMessageName;
    NSData * _intentResponseMessageData;
    NSString * _intentResponseMessageName;
    NSString * _resultIdentifier;
    int  _source;
    NSString * _title;
    int  _type;
    _SFPBURL * _urlValue;
}

@property (nonatomic, copy) NSString *cardId;
@property (copy) NSArray *cardSections;
@property (nonatomic, copy) NSString *contextReferenceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *dismissalCommands;
@property (nonatomic, copy) NSData *entityIdentifier;
@property (nonatomic, readonly) bool hasCardId;
@property (nonatomic, readonly) bool hasContextReferenceIdentifier;
@property (nonatomic, readonly) bool hasEntityIdentifier;
@property (nonatomic, readonly) bool hasIntentMessageData;
@property (nonatomic, readonly) bool hasIntentMessageName;
@property (nonatomic, readonly) bool hasIntentResponseMessageData;
@property (nonatomic, readonly) bool hasIntentResponseMessageName;
@property (nonatomic, readonly) bool hasResultIdentifier;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, readonly) bool hasUrlValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentMessageData;
@property (nonatomic, copy) NSString *intentMessageName;
@property (nonatomic, copy) NSData *intentResponseMessageData;
@property (nonatomic, copy) NSString *intentResponseMessageName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBURL *urlValue;

- (void).cxx_destruct;
- (void)addCardSections:(id)arg1;
- (void)addDismissalCommands:(id)arg1;
- (id)cardId;
- (id)cardSections;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (void)clearDismissalCommands;
- (id)contextReferenceIdentifier;
- (id)dictionaryRepresentation;
- (id)dismissalCommands;
- (id)dismissalCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dismissalCommandsCount;
- (id)entityIdentifier;
- (bool)hasCardId;
- (bool)hasContextReferenceIdentifier;
- (bool)hasEntityIdentifier;
- (bool)hasIntentMessageData;
- (bool)hasIntentMessageName;
- (bool)hasIntentResponseMessageData;
- (bool)hasIntentResponseMessageName;
- (bool)hasResultIdentifier;
- (bool)hasSource;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasUrlValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentMessageData;
- (id)intentMessageName;
- (id)intentResponseMessageData;
- (id)intentResponseMessageName;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultIdentifier;
- (void)setCardId:(id)arg1;
- (void)setCardSections:(id)arg1;
- (void)setContextReferenceIdentifier:(id)arg1;
- (void)setDismissalCommands:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setIntentMessageData:(id)arg1;
- (void)setIntentMessageName:(id)arg1;
- (void)setIntentResponseMessageData:(id)arg1;
- (void)setIntentResponseMessageName:(id)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrlValue:(id)arg1;
- (int)source;
- (id)title;
- (int)type;
- (id)urlValue;
- (void)writeTo:(id)arg1;

@end
