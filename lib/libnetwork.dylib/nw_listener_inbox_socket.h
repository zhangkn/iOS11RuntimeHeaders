/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface nw_listener_inbox_socket : nw_listener_inbox {
    NSObject<OS_nw_parameters> * _parameters;
    int  _sockfd_for_logging_only_do_not_close_or_use;
    void * _source;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 parameters:(id)arg2 delegate:(id)arg3;

@end
