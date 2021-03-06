/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlayMapModel : VKMapTileModel <VKMapLayer> {
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> > { 
        struct __compressed_pair<ggl::ClearItem *, std::__1::default_delete<ggl::ClearItem> > { 
            struct ClearItem {} *__first_; 
        } __ptr_; 
    }  _clearItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _gglRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _gglRenderStateDepthTest;
    unsigned long long  _level;
    struct shared_ptr<ggl::Textured::Pos2DUVPipelineState> { 
        struct Pos2DUVPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pipelineState;
    NSMutableArray * _sortedTiles;
    struct unique_ptr<ggl::Mesh, std::__1::default_delete<ggl::Mesh> > { 
        struct __compressed_pair<ggl::Mesh *, std::__1::default_delete<ggl::Mesh> > { 
            struct Mesh {} *__first_; 
        } __ptr_; 
    }  _unitMesh;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2 level:(unsigned long long)arg3;
- (unsigned char)mapLayerPosition;
- (void)reset;
- (bool)shouldLayoutWithoutStyleManager;

@end
