//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/SUWebViewDelegate-Protocol.h>
#import <iTunesStoreUI/SUWebViewManagerDelegate-Protocol.h>

@class ACAccount, ISURLRequestPerformance, NSDictionary, NSString, NSURL, SSAuthenticationContext, SSMutableAuthenticationContext, SUDelayedNavigationItem, SUMescalSession, SUObjectPool, SUStorePageProtocol, SUWebView, SUWebViewManager;

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate>
{
    SUWebView *_webView;
    SSMutableAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    NSURL *_displayedURL;
    _Bool _hasEverAppeared;
    long long _lastKnownOrientation;
    CDUnknownBlockType _loadBlock;
    SUMescalSession *_mescalSession;
    SUObjectPool *_objectPool;
    ISURLRequestPerformance *_performanceMetrics;
    long long _scheduledOrientation;
    _Bool _shouldSignRequests;
    SUStorePageProtocol *_storePageProtocol;
    long long _style;
    NSURL *_url;
    _Bool _viewIsReady;
    SUWebViewManager *_webViewManager;
    ACAccount *_account;
    NSDictionary *_tidHeaders;
}

@property(retain, nonatomic) NSDictionary *tidHeaders; // @synthesize tidHeaders=_tidHeaders;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool viewIsReady; // @synthesize viewIsReady=_viewIsReady;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldSignRequests; // @synthesize shouldSignRequests=_shouldSignRequests;
@property(retain, nonatomic, getter=_performanceMetrics, setter=_setPerformanceMetrics:) ISURLRequestPerformance *_performanceMetrics; // @synthesize _performanceMetrics;
@property(retain, nonatomic, getter=_mescalSession, setter=_setMescalSession:) SUMescalSession *_mescalSession; // @synthesize _mescalSession;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)_setLastKnownOrientation:(long long)arg1;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(long long)arg1;
- (void)_removePlaceholderBackgroundView;
- (void)_reloadUI;
- (void)_reloadPlaceholderBackgroundView;
- (void)_reloadObjectPool;
- (void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1;
- (void)_prepareToLoadURL:(id)arg1;
- (id)_placeholderBackgroundView;
- (void)_loadURLRequest:(id)arg1;
- (void)_getURLRequestForOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_finishLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (id)_defaultBackgroundColor;
- (void)_applyScriptProperties:(id)arg1;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_addPlaceholderBackgroundView;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (void)_loadWithURLOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect)arg2;
- (void)webViewManagerDidStartLoad:(id)arg1;
- (void)webViewManagerDidFinishLoad:(id)arg1;
- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
- (void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;
- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
- (id)viewControllerForWebViewManager:(id)arg1;
- (id)newScriptInterfaceForWebViewManager:(id)arg1;
- (id)newRotationController;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)storePageProtocolDidChange;
- (void)storePageCleanupBeforeTearDown;
- (id)storePageProtocol;
- (void)setStorePageProtocol:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)parentViewControllerHierarchyDidChange;
- (id)navigationItemForScriptInterface;
- (struct CGSize)minimumViewSize;
- (void)loadView;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)invalidate;
- (struct CGRect)documentBounds;
- (id)displayedURL;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
@property(readonly, nonatomic) SUWebView *webView;
- (id)newScriptInterface;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

