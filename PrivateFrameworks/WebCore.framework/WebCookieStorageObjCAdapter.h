/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCookieStorageObjCAdapter : NSObject {
    struct function<void ()>="__buf_"{type="__lx"[24C] {}  m_cookieChangeCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cookiesChangedNotificationHandler:(id)arg1;
- (void)notifyCookiesChangedOnMainThread;
- (void)startListeningForCookieChangeNotificationsWithCallback:(struct function<void ()>={type=[24C] {}*)arg1;
- (void)stopListeningForCookieChangeNotifications;

@end
