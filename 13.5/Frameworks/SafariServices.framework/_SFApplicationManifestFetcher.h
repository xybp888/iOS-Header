//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView, _WKApplicationManifest;

@interface _SFApplicationManifestFetcher : NSObject
{
    CDUnknownBlockType _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (void).cxx_destruct;
- (void)getApplicationManifestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithWebView:(id)arg1;

@end

