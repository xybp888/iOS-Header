//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListenerEndpoint;

@interface WFJavaScriptRunClient : NSObject
{
    NSXPCListenerEndpoint *_endpoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)runJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEndpoint:(id)arg1;

@end

