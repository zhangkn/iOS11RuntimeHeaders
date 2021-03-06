/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiSDBSliceSpecific : PBCodable <NSCopying> {
    unsigned long long  _deferredTransmissionsCount;
    struct { 
        unsigned int deferredTransmissionsCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int txMuteHigher16BitsTimeInMilliseconds : 1; 
        unsigned int txMuteLower16BitsTimeInMilliseconds : 1; 
        unsigned int txPathMuteCount : 1; 
        unsigned int txPathOffRequestCount : 1; 
        unsigned int txPathOnRequestCount : 1; 
        unsigned int txPathUnmuteCount : 1; 
        unsigned int txPowerOffRequestByOtherSliceCount : 1; 
        unsigned int txPowerOffRequestByThisSliceCount : 1; 
        unsigned int txPriBitHigher16BitsTimeInMilliseconds : 1; 
        unsigned int txPriBitLower16BitsTimeInMilliseconds : 1; 
        unsigned int txPriorityCount : 1; 
        unsigned int txaBitOffCount : 1; 
        unsigned int txaBitOnCount : 1; 
        unsigned int txaBitOnHigher16BitsTimeInMilliseconds : 1; 
        unsigned int txaBitOnLower16BitsTimeInMilliseconds : 1; 
        unsigned int txporBitOnHigher16BitsTimeInMilliseconds : 1; 
        unsigned int txporBitOnLower16BitsTimeInMilliseconds : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned long long  _txMuteHigher16BitsTimeInMilliseconds;
    unsigned long long  _txMuteLower16BitsTimeInMilliseconds;
    unsigned long long  _txPathMuteCount;
    unsigned long long  _txPathOffRequestCount;
    unsigned long long  _txPathOnRequestCount;
    unsigned long long  _txPathUnmuteCount;
    unsigned long long  _txPowerOffRequestByOtherSliceCount;
    unsigned long long  _txPowerOffRequestByThisSliceCount;
    unsigned long long  _txPriBitHigher16BitsTimeInMilliseconds;
    unsigned long long  _txPriBitLower16BitsTimeInMilliseconds;
    unsigned long long  _txPriorityCount;
    unsigned long long  _txaBitOffCount;
    unsigned long long  _txaBitOnCount;
    unsigned long long  _txaBitOnHigher16BitsTimeInMilliseconds;
    unsigned long long  _txaBitOnLower16BitsTimeInMilliseconds;
    unsigned long long  _txporBitOnHigher16BitsTimeInMilliseconds;
    unsigned long long  _txporBitOnLower16BitsTimeInMilliseconds;
}

@property (nonatomic) unsigned long long deferredTransmissionsCount;
@property (nonatomic) bool hasDeferredTransmissionsCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTxMuteHigher16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxMuteLower16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxPathMuteCount;
@property (nonatomic) bool hasTxPathOffRequestCount;
@property (nonatomic) bool hasTxPathOnRequestCount;
@property (nonatomic) bool hasTxPathUnmuteCount;
@property (nonatomic) bool hasTxPowerOffRequestByOtherSliceCount;
@property (nonatomic) bool hasTxPowerOffRequestByThisSliceCount;
@property (nonatomic) bool hasTxPriBitHigher16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxPriBitLower16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxPriorityCount;
@property (nonatomic) bool hasTxaBitOffCount;
@property (nonatomic) bool hasTxaBitOnCount;
@property (nonatomic) bool hasTxaBitOnHigher16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxaBitOnLower16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxporBitOnHigher16BitsTimeInMilliseconds;
@property (nonatomic) bool hasTxporBitOnLower16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long txMuteHigher16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txMuteLower16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txPathMuteCount;
@property (nonatomic) unsigned long long txPathOffRequestCount;
@property (nonatomic) unsigned long long txPathOnRequestCount;
@property (nonatomic) unsigned long long txPathUnmuteCount;
@property (nonatomic) unsigned long long txPowerOffRequestByOtherSliceCount;
@property (nonatomic) unsigned long long txPowerOffRequestByThisSliceCount;
@property (nonatomic) unsigned long long txPriBitHigher16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txPriBitLower16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txPriorityCount;
@property (nonatomic) unsigned long long txaBitOffCount;
@property (nonatomic) unsigned long long txaBitOnCount;
@property (nonatomic) unsigned long long txaBitOnHigher16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txaBitOnLower16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txporBitOnHigher16BitsTimeInMilliseconds;
@property (nonatomic) unsigned long long txporBitOnLower16BitsTimeInMilliseconds;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deferredTransmissionsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeferredTransmissionsCount;
- (bool)hasTimestamp;
- (bool)hasTxMuteHigher16BitsTimeInMilliseconds;
- (bool)hasTxMuteLower16BitsTimeInMilliseconds;
- (bool)hasTxPathMuteCount;
- (bool)hasTxPathOffRequestCount;
- (bool)hasTxPathOnRequestCount;
- (bool)hasTxPathUnmuteCount;
- (bool)hasTxPowerOffRequestByOtherSliceCount;
- (bool)hasTxPowerOffRequestByThisSliceCount;
- (bool)hasTxPriBitHigher16BitsTimeInMilliseconds;
- (bool)hasTxPriBitLower16BitsTimeInMilliseconds;
- (bool)hasTxPriorityCount;
- (bool)hasTxaBitOffCount;
- (bool)hasTxaBitOnCount;
- (bool)hasTxaBitOnHigher16BitsTimeInMilliseconds;
- (bool)hasTxaBitOnLower16BitsTimeInMilliseconds;
- (bool)hasTxporBitOnHigher16BitsTimeInMilliseconds;
- (bool)hasTxporBitOnLower16BitsTimeInMilliseconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeferredTransmissionsCount:(unsigned long long)arg1;
- (void)setHasDeferredTransmissionsCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTxMuteHigher16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxMuteLower16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxPathMuteCount:(bool)arg1;
- (void)setHasTxPathOffRequestCount:(bool)arg1;
- (void)setHasTxPathOnRequestCount:(bool)arg1;
- (void)setHasTxPathUnmuteCount:(bool)arg1;
- (void)setHasTxPowerOffRequestByOtherSliceCount:(bool)arg1;
- (void)setHasTxPowerOffRequestByThisSliceCount:(bool)arg1;
- (void)setHasTxPriBitHigher16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxPriBitLower16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxPriorityCount:(bool)arg1;
- (void)setHasTxaBitOffCount:(bool)arg1;
- (void)setHasTxaBitOnCount:(bool)arg1;
- (void)setHasTxaBitOnHigher16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxaBitOnLower16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxporBitOnHigher16BitsTimeInMilliseconds:(bool)arg1;
- (void)setHasTxporBitOnLower16BitsTimeInMilliseconds:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxMuteHigher16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxMuteLower16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxPathMuteCount:(unsigned long long)arg1;
- (void)setTxPathOffRequestCount:(unsigned long long)arg1;
- (void)setTxPathOnRequestCount:(unsigned long long)arg1;
- (void)setTxPathUnmuteCount:(unsigned long long)arg1;
- (void)setTxPowerOffRequestByOtherSliceCount:(unsigned long long)arg1;
- (void)setTxPowerOffRequestByThisSliceCount:(unsigned long long)arg1;
- (void)setTxPriBitHigher16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxPriBitLower16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxPriorityCount:(unsigned long long)arg1;
- (void)setTxaBitOffCount:(unsigned long long)arg1;
- (void)setTxaBitOnCount:(unsigned long long)arg1;
- (void)setTxaBitOnHigher16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxaBitOnLower16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxporBitOnHigher16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTxporBitOnLower16BitsTimeInMilliseconds:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)txMuteHigher16BitsTimeInMilliseconds;
- (unsigned long long)txMuteLower16BitsTimeInMilliseconds;
- (unsigned long long)txPathMuteCount;
- (unsigned long long)txPathOffRequestCount;
- (unsigned long long)txPathOnRequestCount;
- (unsigned long long)txPathUnmuteCount;
- (unsigned long long)txPowerOffRequestByOtherSliceCount;
- (unsigned long long)txPowerOffRequestByThisSliceCount;
- (unsigned long long)txPriBitHigher16BitsTimeInMilliseconds;
- (unsigned long long)txPriBitLower16BitsTimeInMilliseconds;
- (unsigned long long)txPriorityCount;
- (unsigned long long)txaBitOffCount;
- (unsigned long long)txaBitOnCount;
- (unsigned long long)txaBitOnHigher16BitsTimeInMilliseconds;
- (unsigned long long)txaBitOnLower16BitsTimeInMilliseconds;
- (unsigned long long)txporBitOnHigher16BitsTimeInMilliseconds;
- (unsigned long long)txporBitOnLower16BitsTimeInMilliseconds;
- (void)writeTo:(id)arg1;

@end
