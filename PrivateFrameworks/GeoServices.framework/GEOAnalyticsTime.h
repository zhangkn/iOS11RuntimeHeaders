/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnalyticsTime : PBCodable <NSCopying> {
    NSString * _date;
    struct { 
        unsigned int relativeTimestamp : 1; 
        unsigned int hour : 1; 
    }  _has;
    unsigned int  _hour;
    unsigned long long  _relativeTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *date;
@property (nonatomic, readonly) bool hasDate;
@property (nonatomic) bool hasHour;
@property (nonatomic) bool hasRelativeTimestamp;
@property (nonatomic) unsigned int hour;
@property (nonatomic) unsigned long long relativeTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (bool)hasHour;
- (bool)hasRelativeTimestamp;
- (unsigned long long)hash;
- (unsigned int)hour;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)relativeTimestamp;
- (void)setDate:(id)arg1;
- (void)setHasHour:(bool)arg1;
- (void)setHasRelativeTimestamp:(bool)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setRelativeTimestamp:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
