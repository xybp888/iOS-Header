//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/JSExport-Protocol.h>

@class OKPageViewController;
@protocol OKWidgetProtocol;

@protocol OKPresentationViewControllerProxyExport <JSExport>
- (struct CGPoint)convertLocationInWindow:(struct CGPoint)arg1 toWidget:(id <OKWidgetProtocol>)arg2;
- (struct CGPoint)convertLocationInWindow:(struct CGPoint)arg1 toPage:(OKPageViewController *)arg2;

@optional
- (struct CGPoint)convertLocationInWindow:(struct CGPoint)arg1 toWidget:(id <OKWidgetProtocol>)arg2 __JS_EXPORT_AS__convertLocationInWindowToWidget:(id)arg3;
- (struct CGPoint)convertLocationInWindow:(struct CGPoint)arg1 toPage:(OKPageViewController *)arg2 __JS_EXPORT_AS__convertLocationInWindowToPage:(id)arg3;
@end

