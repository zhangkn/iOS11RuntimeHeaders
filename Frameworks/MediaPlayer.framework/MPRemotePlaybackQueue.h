/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemotePlaybackQueue : NSObject {
    struct _MRSystemAppPlaybackQueue { } * _mediaRemotePlaybackQueue;
}

@property (getter=isRequestingImmediatePlayback, nonatomic) bool requestingImmediatePlayback;
@property (nonatomic) bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic, copy) NSString *siriRecommendationIdentifier;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;

- (struct _MRSystemAppPlaybackQueue { }*)_mediaRemotePlaybackQueue;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (bool)isRequestingImmediatePlayback;
- (void)setRequestingImmediatePlayback:(bool)arg1;
- (void)setShouldOverrideManuallyCuratedQueue:(bool)arg1;
- (void)setSiriRecommendationIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldOverrideManuallyCuratedQueue;
- (id)siriRecommendationIdentifier;
- (id)userInfo;
- (bool)verifyWithError:(id*)arg1;

@end
