//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSURL, WAKWindow, WebFixedPositionContent, WebFullScreenController, WebIndicateLayer, WebInspector, WebNodeHighlight, WebPreferences;
@protocol WebCaretChangeListener, WebDeviceOrientationProvider, WebFormDelegate, WebGeolocationProvider, WebNotificationProvider;

__attribute__((visibility("hidden")))
@interface WebViewPrivate : NSObject
{
    struct Page *page;
    struct RefPtr<WebViewGroup, WTF::DumbPtrTraits<WebViewGroup>> group;
    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    id <WebFormDelegate> formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    id resourceProgressDelegateForwarder;
    id formDelegateForwarder;
    WebInspector *inspector;
    WebNodeHighlight *currentNodeHighlight;
    struct RefPtr<WebCore::ValidationBubble, WTF::DumbPtrTraits<WebCore::ValidationBubble>> formValidationBubble;
    _Bool shouldMaintainInactiveSelection;
    _Bool allowsUndo;
    float zoomMultiplier;
    _Bool zoomsTextOnly;
    NSString *applicationNameForUserAgent;
    struct String userAgent;
    _Bool userAgentOverridden;
    WebPreferences *preferences;
    _Bool useSiteSpecificSpoofing;
    NSURL *userStyleSheetLocation;
    WAKWindow *hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache historyDelegateImplementations;
    _Bool closed;
    _Bool closing;
    unsigned long long deviceOrientation;
    _Bool shouldCloseWithWindow;
    _Bool mainFrameDocumentReady;
    _Bool drawsBackground;
    _Bool tabKeyCyclesThroughElementsChanged;
    _Bool becomingFirstResponder;
    _Bool becomingFirstResponderFromOutside;
    _Bool usesPageCache;
    struct CGColor *backgroundColor;
    NSString *mediaStyle;
    _Bool hasSpellCheckerDocumentTag;
    long long spellCheckerDocumentTag;
    _Bool isStopping;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    _Bool allowsMessaging;
    NSMutableSet *_caretChangeListeners;
    id <WebCaretChangeListener> _caretChangeListener;
    struct CGSize fixedLayoutSize;
    _Bool mainViewIsScrollingOrZooming;
    int didDrawTiles;
    struct Lock pendingFixedPositionLayoutRectMutex;
    struct CGRect pendingFixedPositionLayoutRect;
    struct RetainPtr<WebUITextIndicatorData> textIndicatorData;
    struct RetainPtr<WebUITextIndicatorData> dataOperationTextIndicator;
    struct CGRect dragPreviewFrameInRootViewCoordinates;
    unsigned long long dragSourceAction;
    struct RetainPtr<NSURL> draggedLinkURL;
    struct RetainPtr<NSString> draggedLinkTitle;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>> identifierMap;
    _Bool _keyboardUIModeAccessed;
    int _keyboardUIMode;
    _Bool shouldUpdateWhileOffscreen;
    _Bool needsOneShotDrawingSynchronization;
    _Bool postsAcceleratedCompositingNotifications;
    struct RefPtr<LayerFlushController, WTF::DumbPtrTraits<LayerFlushController>> layerFlushController;
    struct CGSize lastLayoutSize;
    struct RetainPtr<WebVideoFullscreenController> fullscreenController;
    struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> fullscreenControllersExiting;
    WebFullScreenController *newFullscreenController;
    WebIndicateLayer *indicateLayer;
    id <WebGeolocationProvider> _geolocationProvider;
    id <WebDeviceOrientationProvider> m_deviceOrientationProvider;
    id <WebNotificationProvider> _notificationProvider;
    _Bool interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    float customDeviceScaleFactor;
    WebFixedPositionContent *_fixedPositionContent;
    struct unique_ptr<WebCore::AlternativeTextUIController, std::__1::default_delete<WebCore::AlternativeTextUIController>> m_alternativeTextUIController;
    struct RetainPtr<NSData> sourceApplicationAuditData;
    _Bool _didPerformFirstNavigation;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

