/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemHandle : PBCodable <NSCopying> {
    int  _handleType;
    struct { 
        unsigned int handleType : 1; 
    }  _has;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
}

@property (nonatomic) int handleType;
@property (nonatomic) bool hasHandleType;
@property (nonatomic, readonly) bool hasPlaceRefinementParameters;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;

- (void).cxx_destruct;
- (int)StringAsHandleType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)handleType;
- (id)handleTypeAsString:(int)arg1;
- (bool)hasHandleType;
- (bool)hasPlaceRefinementParameters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRefinementParameters;
- (bool)readFrom:(id)arg1;
- (void)setHandleType:(int)arg1;
- (void)setHasHandleType:(bool)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
