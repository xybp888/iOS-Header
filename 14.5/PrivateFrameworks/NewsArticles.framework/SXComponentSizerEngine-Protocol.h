//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsArticles/NSObject-Protocol.h>

@class SXComponentSizer, SXLayoutOptions;
@protocol SXComponent, SXComponentLayout, SXComponentSizerFactory, SXDOMObjectProviding;

@protocol SXComponentSizerEngine <NSObject>
- (void)removeFactory:(id <SXComponentSizerFactory>)arg1;
- (void)addFactory:(id <SXComponentSizerFactory>)arg1;
- (SXComponentSizer *)sizerForComponent:(id <SXComponent>)arg1 componentLayout:(id <SXComponentLayout>)arg2 layoutOptions:(SXLayoutOptions *)arg3 DOMObjectProvider:(id <SXDOMObjectProviding>)arg4;
@end

