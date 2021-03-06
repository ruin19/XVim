//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
// UUID: 9739453A-47DB-3B81-AD69-A62A30EA7D74
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 525.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSMutableCopying
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol SKStoreProductViewControllerDelegate <NSObject>

@optional
- (void)productViewControllerDidFinish:(SKStoreProductViewController *)arg1;
@end

@protocol SKUIClientAccountPageViewController <NSObject>
- (void)dismissViewController;
- (void)didPrepareWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
@end

@protocol SKUIClientComposeReviewViewController <NSObject>
- (void)promptForStarRating;
- (void)didPrepareWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)didFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
@end

@protocol SKUIClientProductPageViewController <NSObject>
- (void)setStatusBarStyle:(NSNumber *)arg1 animated:(NSNumber *)arg2;
- (void)setStatusBarHidden:(NSNumber *)arg1 withAnimation:(NSNumber *)arg2;
- (void)promptForStarRating;
- (void)presentPageWithRequest:(NSDictionary *)arg1 animated:(NSNumber *)arg2;
- (void)loadDidFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)didReceiveTitle:(NSString *)arg1;
- (void)didFinishWithResult:(NSNumber *)arg1;
- (void)didFinish;
@end

@protocol SKUIClientStorePageViewController <NSObject>
- (void)showProductPageWithItemIdentifier:(NSNumber *)arg1;
- (void)didFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
@end

@protocol SKUIServiceAccountPageViewController <NSObject>
- (void)loadWithURL:(NSURL *)arg1;
@end

@protocol SKUIServiceComposeReviewViewController <NSObject>
- (void)loadReviewWithURL:(NSURL *)arg1;
- (void)finishStarRatingPromptWithRating:(NSNumber *)arg1;
@end

@protocol SKUIServiceProductPageViewController <NSObject>
- (void)setPromptString:(NSString *)arg1;
- (void)setShowsRightBarButton:(NSNumber *)arg1;
- (void)setRightBarButtonTitle:(NSString *)arg1;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setAskToBuy:(NSNumber *)arg1;
- (void)setShowsStoreButton:(NSNumber *)arg1;
- (void)setScriptContextDictionary:(NSDictionary *)arg1;
- (void)setProductPageStyle:(NSNumber *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)setAffiliateIdentifier:(NSString *)arg1;
- (void)setAdditionalBuyParameters:(NSString *)arg1;
- (void)loadProductWithURL:(NSURL *)arg1;
- (void)loadProductWithRequest:(NSDictionary *)arg1;
- (void)loadProductWithParameters:(NSDictionary *)arg1;
- (void)loadProductWithPageDictionary:(NSDictionary *)arg1;
- (void)finishStarRatingPromptWithRating:(NSNumber *)arg1;
- (void)finishImmediately;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
@end

@protocol SKUIServiceStorePageViewController <NSObject>
- (void)loadPageWithURL:(NSURL *)arg1;
- (void)loadPageWithURLBagKey:(NSString *)arg1;
@end

@protocol UIAlertViewDelegate <NSObject>

@optional
- (_Bool)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

@interface SKAccountPageViewController : UIViewController
{
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    id <SKAccountPageViewControllerDelegate> _delegate;
    CDUnknownBlockType _prepareBlock;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
}

@property(nonatomic) id <SKAccountPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestRemoteViewController;
- (void)_addRemoteView;
- (void)_dismissViewController;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAccountURL:(id)arg1;

@end

@interface SKComposeReviewViewController : UIViewController
{
    _UIAsyncInvocation *_cancelRequest;
    NSURL *_compositionURL;
    id <SKComposeReviewDelegate> _delegate;
    CDUnknownBlockType _prepareBlock;
    SKRemoteComposeReviewViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> *_serviceProxy;
}

@property(nonatomic) id <SKComposeReviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_requestRemoteViewController;
- (void)_addRemoteView;
- (void)_tearDownAfterError:(id)arg1;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didFinishWithResult:(_Bool)arg1 error:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCompositionURL:(id)arg1;

@end

@interface SKDownload : NSObject
{
    NSString *_contentIdentifier;
    long long _contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    long long _downloadState;
    NSError *_error;
    float _progress;
    double _timeRemaining;
    SKPaymentTransaction *_transaction;
    NSString *_version;
}

@property(readonly, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long downloadState; // @synthesize downloadState=_downloadState;
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID; // @synthesize _downloadID;
@property(readonly, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_version;
@property(readonly, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setVersion:(id)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setError:(id)arg1;
- (void)_setDownloadState:(long long)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setContentLength:(long long)arg1;
- (void)_setContentIdentifier:(id)arg1;
- (void)_applyChangeset:(id)arg1;
- (void)dealloc;
- (id)init;

@end

@interface SKDownloadChangeset : NSObject <NSCopying>
{
    NSNumber *_contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    NSNumber *_downloadState;
    NSError *_error;
    NSNumber *_progress;
    NSNumber *_timeRemaining;
}

+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;
@property(copy, nonatomic) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(copy, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSNumber *downloadState; // @synthesize downloadState=_downloadState;
@property(copy, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end

@interface SKRequest : NSObject
{
    id _requestInternal;
}

- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_startWithMessage:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_shutdownRequest;
- (void)_sendXPCMessage;
@property(copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
- (void)start;
@property(nonatomic) id <SKRequestDelegate> delegate;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

@interface SKHandleInvalidReceiptRequest : SKRequest
{
}

- (void)_sendXPCMessage;

@end

__attribute__((visibility("hidden")))
@interface SKInvocationQueueProxy : NSObject
{
    NSMutableArray *_invocationQueue;
    id _invocationTarget;
    Protocol *_protocol;
}

@property(retain, nonatomic) id invocationTarget; // @synthesize invocationTarget=_invocationTarget;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithProtocol:(id)arg1;

@end

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

+ (id)paymentWithProductIdentifier:(id)arg1;
+ (id)paymentWithProduct:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *requestParameters;
@property(readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, copy, nonatomic) NSString *partnerIdentifier;
@property(readonly, copy, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, copy, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface SKMutablePayment : SKPayment
{
}

@property(copy, nonatomic) NSDictionary *requestParameters; // @dynamic requestParameters;
@property(copy, nonatomic) NSString *partnerTransactionIdentifier; // @dynamic partnerTransactionIdentifier;
@property(copy, nonatomic) NSString *partnerIdentifier; // @dynamic partnerIdentifier;
@property(copy, nonatomic) NSData *requestData; // @dynamic requestData;
@property(nonatomic) long long quantity; // @dynamic quantity;
@property(copy, nonatomic) NSString *productIdentifier; // @dynamic productIdentifier;
@property(copy, nonatomic) NSString *applicationUsername; // @dynamic applicationUsername;

@end

@interface SKPaymentInternal : NSObject <NSCopying>
{
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    long long _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

@interface SKPaymentQueue : NSObject
{
    id _internal;
}

+ (_Bool)canMakePayments;
+ (id)defaultQueue;
- (void)_updatePaymentsForMessage:(id)arg1;
- (void)_updateDownloadsForMessage:(id)arg1;
- (void)_setTransactionsWithReply:(id)arg1;
- (void)_sendCommand:(long long)arg1 forDownloads:(id)arg2;
- (void)_removePaymentsForMessage:(id)arg1;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_refreshPaymentsWithPolicy:(long long)arg1;
- (void)_processUpdates:(id)arg1 trimUnmatched:(_Bool)arg2 sendUpdatedDownloads:(_Bool)arg3;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_notifyObserversAboutDownloadChanges:(id)arg1;
- (void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(_Bool)arg2;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (void)_handleConnectionDisconnect;
- (void)_finishRefreshPayments;
- (void)_establishConnectionIfNeeded;
- (void)_establishConnection;
- (id)_copyTransactionsFromXPCArray:(id)arg1;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)arg1;
- (id)_copyDownloadIDsForDownloads:(id)arg1;
- (void)_completeRestoreWithMessage:(id)arg1;
- (id)_applyDownloadChangeset:(id)arg1;
- (void)_daemonLaunchedNotification;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
@property(readonly, nonatomic) SKPaymentQueueClient *paymentQueueClient;
- (id)initWithPaymentQueueClient:(id)arg1;
@property(readonly, nonatomic) NSArray *transactions;
- (void)startDownloads:(id)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (void)restoreCompletedTransactions;
- (void)removeTransactionObserver:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initSKPaymentQueue;

@end

@interface SKPaymentQueueClient : NSObject <NSCopying>
{
    _Bool _allowsBootstrapCellularData;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    _Bool _hidesConfirmationDialogs;
    _Bool _ignoresInAppPurchaseRestriction;
    NSString *_receiptDirectoryPath;
    _Bool _requiresAuthenticationForPayment;
    NSNumber *_storeExternalVersion;
    NSNumber *_storeItemIdentifier;
    NSString *_vendorIdentifier;
}

@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(copy, nonatomic) NSNumber *storeExternalVersion; // @synthesize storeExternalVersion=_storeExternalVersion;
@property(nonatomic) _Bool requiresAuthenticationForPayment; // @synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment;
@property(copy, nonatomic) NSString *receiptDirectoryPath; // @synthesize receiptDirectoryPath=_receiptDirectoryPath;
@property(nonatomic) _Bool ignoresInAppPurchaseRestriction; // @synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction;
@property(nonatomic) _Bool hidesConfirmationDialogs; // @synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end

@interface SKPaymentQueueInternal : NSObject
{
    _Bool _checkedIn;
    SKPaymentQueueClient *_client;
    _Bool _isRefreshing;
    NSMutableArray *_localTransactions;
    struct __CFArray *_observers;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    _Bool _restoreFinishedDuringRefresh;
    _Bool _restoringCompletedTransactions;
    NSMutableArray *_transactions;
}

- (void)dealloc;

@end

@interface SKPaymentTransaction : NSObject
{
    id _internal;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
@property(readonly, nonatomic) NSString *_transactionIdentifier;
- (void)_setTransactionState:(long long)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setDownloads:(id)arg1;
- (_Bool)mergeWithTransaction:(id)arg1;
@property(readonly, nonatomic) NSString *matchingIdentifier;
- (_Bool)canMergeWithTransaction:(id)arg1;
@property(readonly, nonatomic) long long transactionState;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *downloads;
- (void)dealloc;
- (id)initWithPayment:(id)arg1;
- (id)init;

@end

@interface SKPaymentTransactionInternal : NSObject
{
    NSArray *_downloads;
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    long long _transactionState;
}

- (void)dealloc;

@end

@interface SKProduct : NSObject
{
    id _internal;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)_setProductIdentifier:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setLocalizedTitle:(id)arg1;
- (void)_setLocalizedDescription:(id)arg1;
@property(copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;
- (void)_setDownloadable:(_Bool)arg1;
- (void)_setDownloadContentLengths:(id)arg1;
- (void)_setContentVersion:(id)arg1;
@property(readonly, nonatomic) NSString *productIdentifier;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic) NSString *downloadContentVersion;
@property(readonly, nonatomic) NSArray *downloadContentLengths;
- (void)dealloc;
- (id)init;

@end

@interface SKProductInternal : NSObject
{
    NSString *_contentVersion;
    _Bool _downloadable;
    NSArray *_downloadContentLengths;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
}

- (void)dealloc;

@end

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <SKProductsRequestDelegate> delegate; // @dynamic delegate;

@end

@interface SKProductsRequestInternal : NSObject
{
    NSSet *_productIdentifiers;
}

- (void)dealloc;

@end

@interface SKProductsResponse : NSObject
{
    id _internal;
}

- (void)_setProducts:(id)arg1;
- (void)_setInvalidIdentifiers:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
@property(readonly, nonatomic) NSArray *products;
@property(readonly, nonatomic) NSArray *invalidProductIdentifiers;
- (void)dealloc;
- (id)init;

@end

@interface SKProductsResponseInternal : NSObject
{
    NSArray *_invalidIdentifiers;
    NSArray *_products;
}

- (void)dealloc;

@end

@interface SKReceiptRefreshRequest : SKRequest
{
    NSDictionary *_properties;
}

@property(readonly, nonatomic) NSDictionary *receiptProperties; // @synthesize receiptProperties=_properties;
- (_Bool)_wantsVPP;
- (_Bool)_wantsRevoked;
- (_Bool)_wantsExpired;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;
- (id)initWithReceiptProperties:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController>
{
    SKAccountPageViewController *_accountPageViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKAccountPageViewController *accountPageViewController; // @synthesize accountPageViewController=_accountPageViewController;
- (void)dismissViewController;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController>
{
    SKComposeReviewViewController *_composeReviewViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
- (void)promptForStarRating;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController>
{
    SKStoreProductViewController *_productViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;
- (void)promptForStarRating;
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)didReceiveTitle:(id)arg1;
- (void)didFinishWithResult:(id)arg1;
- (void)didFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController>
{
    SKStorePageViewController *_storePageViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(nonatomic) __weak SKStorePageViewController *storePageViewController; // @synthesize storePageViewController=_storePageViewController;
- (void)showProductPageWithItemIdentifier:(id)arg1;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SKRequestInternal : NSObject
{
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id <SKRequestDelegate> _delegate;
    long long _state;
}

- (void)dealloc;

@end

@interface SKStarRatingAlertView : UIAlertView
{
    SKStarRatingControl *_ratingControl;
}

- (void)_ratingControlChanged:(id)arg1;
- (void)showWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) float rating;
- (void)dealloc;
- (id)initSKStarRatingAlertView;

@end

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate>
{
    SKStarRatingAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
}

- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)showAlertView:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SKStarRatingControl : UIControl
{
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize _hitPadding;
    double _starWidth;
    struct CGPoint _trackingLastPoint;
    struct CGPoint _trackingStartPoint;
    float _value;
}

@property(nonatomic) double starWidth; // @synthesize starWidth=_starWidth;
- (void)_updateValueForPoint:(struct CGPoint)arg1;
- (id)_newExplanationLabel;
- (struct CGRect)_foregroundImageClipBounds;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)canHandleSwipes;
- (_Bool)_alwaysHandleScrollerMouseEvent;
@property(nonatomic) float value;
@property(copy, nonatomic) NSString *explanationText;
- (void)setHitPadding:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;

@end

@interface SKStorePageRequest : NSObject
{
    long long _pageStyle;
    NSDictionary *_productParameters;
    NSURL *_productURL;
}

@property(copy, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(copy, nonatomic) NSDictionary *productParameters; // @synthesize productParameters=_productParameters;
@property(nonatomic) long long productPageStyle; // @synthesize productPageStyle=_pageStyle;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    _UIAsyncInvocation *_cancelRequest;
    CDUnknownBlockType _loadBlock;
    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}

- (void)_requestRemoteViewController;
- (void)_prepareToLoadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_dismissProductPageViewController;
- (void)_didLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_addRemoteView;
- (void)_showProductPageWithItemIdentifier:(id)arg1;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SKStoreProductViewController : UIViewController
{
    NSString *_additionalBuyParameters;
    NSString *_affiliateIdentifier;
    _Bool _automaticallyDismisses;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    id <SKStoreProductViewControllerDelegatePrivate> _delegate;
    CDUnknownBlockType _loadBlock;
    long long _originalStatusBarStyle;
    long long _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
    _Bool _showsStoreButton;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    _Bool _showsRightBarButton;
    _Bool _askToBuy;
    NSString *_promptString;
}

+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
@property(nonatomic) _Bool askToBuy; // @synthesize askToBuy=_askToBuy;
@property(copy, nonatomic) NSDictionary *scriptContextDictionary; // @synthesize scriptContextDictionary=_scriptContextDictionary;
@property(nonatomic) _Bool showsRightBarButton; // @synthesize showsRightBarButton=_showsRightBarButton;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property(copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property(nonatomic) long long productPageStyle; // @synthesize productPageStyle=_productPageStyle;
@property(nonatomic) id <SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) _Bool automaticallyDismisses; // @synthesize automaticallyDismisses=_automaticallyDismisses;
@property(copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
@property(copy, nonatomic) NSString *additionalBuyParameters; // @synthesize additionalBuyParameters=_additionalBuyParameters;
- (void)_throwUnsupportedPresentationException;
- (void)_setLoadBlock:(CDUnknownBlockType)arg1;
- (void)_requestRemoteViewController;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (void)_presentPageWithRequest:(id)arg1 animated:(_Bool)arg2;
- (void)_loadDidFinishWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didFinishWithResult:(long long)arg1;
- (void)_didFinish;
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishImmediately;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface SKWeakReference : NSObject
{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;
@property(readonly, nonatomic) id object;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _disconnectBlock;
    CDUnknownBlockType _messageBlock;
}

- (void)_reloadEventHandler;
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (id)createXPCEndpoint;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)init;
- (id)_initSKXPCConnection;

@end

