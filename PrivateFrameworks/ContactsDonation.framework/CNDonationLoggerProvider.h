/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDonationLoggerProvider : NSObject <CNDonationLoggerProvider> {
    <CNDonationAccountLogger> * _accountLoggerImpl;
    <CNDonationAgentLogger> * _agentLoggerImpl;
    <CNDonationExtensionLogger> * _extensionLoggerImpl;
    <CNDonationPreferencesLogger> * _preferencesLoggerImpl;
    <CNDonationToolLogger> * _toolLoggerImpl;
}

@property (readonly) <CNDonationAccountLogger> *accountLogger;
@property (nonatomic, readonly) <CNDonationAccountLogger> *accountLoggerImpl;
@property (readonly) <CNDonationAgentLogger> *agentLogger;
@property (nonatomic, readonly) <CNDonationAgentLogger> *agentLoggerImpl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <CNDonationExtensionLogger> *extensionLogger;
@property (nonatomic, readonly) <CNDonationExtensionLogger> *extensionLoggerImpl;
@property (readonly) unsigned long long hash;
@property (readonly) <CNDonationPreferencesLogger> *preferencesLogger;
@property (nonatomic, readonly) <CNDonationPreferencesLogger> *preferencesLoggerImpl;
@property (readonly) Class superclass;
@property (readonly) <CNDonationToolLogger> *toolLogger;
@property (nonatomic, readonly) <CNDonationToolLogger> *toolLoggerImpl;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (id)accountLogger;
- (id)accountLoggerImpl;
- (id)agentLogger;
- (id)agentLoggerImpl;
- (id)extensionLogger;
- (id)extensionLoggerImpl;
- (id)init;
- (id)preferencesLogger;
- (id)preferencesLoggerImpl;
- (id)toolLogger;
- (id)toolLoggerImpl;

@end
