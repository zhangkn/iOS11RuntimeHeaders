/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemVenueBuilding : NSObject <GEOMapItemVenueBuilding> {
    <GEOVenueIdentifier> * _identifier;
    <GEOVenueLabel> * _label;
}

@property (nonatomic, readonly) <GEOVenueIdentifier> *identifier;
@property (nonatomic, readonly) <GEOVenueLabel> *label;

+ (id)buildingsForVenueID:(unsigned long long)arg1 fromVenueBuildings:(id)arg2;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 building:(id)arg2;
- (id)label;

@end