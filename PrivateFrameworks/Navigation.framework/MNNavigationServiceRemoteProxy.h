/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceClientInterface, MNNavigationServiceProxy, MNNavigationServiceReconnectorDelegate> {
    bool  _applicationActive;
    NSHashTable * _clients;
    NSXPCConnection * _connection;
    <MNNavigationServiceRemoteProxyDelegate> * _delegate;
    NSDate * _lastReconnectionDate;
    MNNavigationServiceReconnector * _reconnector;
    MNSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceRemoteProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupReconnector;
- (void)_closeConnection;
- (void)_initializeReconnectorWithDetails:(id)arg1 shouldPrepare:(bool)arg2;
- (void)_openConnection;
- (id)_remoteObjectProxy;
- (void)_updateConnection;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)changeSettings:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didRerouteWithDetails:(id)arg2 withLocationDetails:(id)arg3;
- (void)navigationServiceProxy:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateActiveRouteDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSetting:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputRouteSelection:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRouteDetails:(id)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateIsInVehicle:(bool)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdatePossibleCommuteDestinations:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationServiceProxy:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 withRouteDetails:(id)arg5;
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationServiceProxy:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceProxyDidArrive:(id)arg1;
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;
- (void)navigationServiceProxyWillReroute:(id)arg1;
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;
- (void)navigationServiceReconnector:(id)arg1 didReconnectWithDetails:(id)arg2;
- (void)openForClient:(id)arg1;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
