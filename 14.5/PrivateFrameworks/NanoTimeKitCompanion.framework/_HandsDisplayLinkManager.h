//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface _HandsDisplayLinkManager : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    _Bool _inForeground;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_invokeHandlers;
- (void)_backgrounded;
- (void)_foregrounded;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (id)_nextToken;
- (void)stopUpdatesForToken:(id)arg1;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

