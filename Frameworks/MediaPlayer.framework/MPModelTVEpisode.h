/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelTVEpisode : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    NSString * _descriptionText;
    double  _duration;
    long long  _episodeNumber;
    long long  _episodeType;
    NSString * _episodeTypeDisplayName;
    long long  _explicitRating;
    bool  _hasCloudSyncSource;
    long long  _keepLocalEnableState;
    long long  _keepLocalManagedStatus;
    bool  _libraryAddEligible;
    bool  _libraryAdded;
    NSDate * _libraryAddedDate;
    MPModelFileAsset * _localFileAsset;
    bool  _musicShow;
    MPModelPlaybackPosition * _playbackPosition;
    NSDate * _releaseDate;
    MPModelTVSeason * _season;
    MPModelTVShow * _show;
    MPModelStoreAsset * _storeAsset;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long episodeType;
@property (nonatomic, copy) NSString *episodeTypeDisplayName;
@property (nonatomic) long long explicitRating;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (getter=isMusicShow, nonatomic) bool musicShow;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *title;

+ (id)__MPModelPropertyTVEpisodeArtwork__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeDescriptionText__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeDuration__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeExplicitRating__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeHasCloudSyncSource__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeKeepLocalEnableState__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeKeepLocalManagedStatus__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeMusicShow__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeNumber__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeReleaseDate__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeTitle__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeTypeDisplayName__PROPERTY;
+ (id)__MPModelPropertyTVEpisodeType__PROPERTY;
+ (id)__MPModelRelationshipTVEpisodeLocalFileAsset__PROPERTY;
+ (id)__MPModelRelationshipTVEpisodePlaybackPosition__PROPERTY;
+ (id)__MPModelRelationshipTVEpisodeSeason__PROPERTY;
+ (id)__MPModelRelationshipTVEpisodeShow__PROPERTY;
+ (id)__MPModelRelationshipTVEpisodeStoreAsset__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__descriptionText__KEY;
+ (id)__duration__KEY;
+ (id)__episodeNumber__KEY;
+ (id)__episodeTypeDisplayName__KEY;
+ (id)__episodeType__KEY;
+ (id)__explicitRating__KEY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__localFileAsset__KEY;
+ (id)__musicShow__KEY;
+ (id)__playbackPosition__KEY;
+ (id)__releaseDate__KEY;
+ (id)__season__KEY;
+ (id)__show__KEY;
+ (id)__storeAsset__KEY;
+ (id)__title__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)descriptionText;
- (double)duration;
- (long long)episodeNumber;
- (long long)episodeType;
- (id)episodeTypeDisplayName;
- (long long)explicitRating;
- (bool)hasCloudSyncSource;
- (bool)isLibraryAddEligible;
- (bool)isLibraryAdded;
- (bool)isMusicShow;
- (long long)keepLocalEnableState;
- (long long)keepLocalManagedStatus;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)libraryAddedDate;
- (long long)libraryRemovalSupportedOptions;
- (id)localFileAsset;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)playbackPosition;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)releaseDate;
- (id)season;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEpisodeNumber:(long long)arg1;
- (void)setEpisodeType:(long long)arg1;
- (void)setEpisodeTypeDisplayName:(id)arg1;
- (void)setExplicitRating:(long long)arg1;
- (void)setHasCloudSyncSource:(bool)arg1;
- (void)setKeepLocalEnableState:(long long)arg1;
- (void)setKeepLocalManagedStatus:(long long)arg1;
- (void)setLibraryAddEligible:(bool)arg1;
- (void)setLibraryAdded:(bool)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setLocalFileAsset:(id)arg1;
- (void)setMusicShow:(bool)arg1;
- (void)setPlaybackPosition:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setStoreAsset:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)show;
- (id)storeAsset;
- (id)title;

@end
