/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKNewAnnotationContainerView : MKAnnotationContainerView {
    NSMutableDictionary * _clusterableAnnotationViews;
    NSMutableSet * _collidableAnnotationViews;
    NSMutableDictionary * _collidingAnnotationViews;
    NSMutableDictionary * _existingClusterAnnotationViews;
    bool  _isUpdating;
    double  _lastUpdate;
    bool  _suppress;
}

- (void).cxx_destruct;
- (id)_existingClusterViewsForClusterID:(id)arg1;
- (void)_updateAddedAnnotationRotation:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPerspectiveMidsteam:(bool)arg1;
- (void)_updateAnnotationViewPositions;
- (void)_updateAnnotationViews:(id)arg1;
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;
- (void)_updateCollidableAnnotationViews;
- (void)addAnnotationView:(id)arg1 allowAnimation:(bool)arg2;
- (void)removeAnnotationView:(id)arg1;
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;
- (void)stopSuppressingUpdates;
- (void)suppressUpdates;

@end
