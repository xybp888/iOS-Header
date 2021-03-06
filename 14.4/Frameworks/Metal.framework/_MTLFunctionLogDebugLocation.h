//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionLogDebugLocation-Protocol.h>

@class MTLDebugLocation, NSString, NSURL;

@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation>
{
    MTLDebugLocation *_debugLocation;
    NSURL *_URL;
}

@property(readonly) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long column;
@property(readonly) unsigned long long line;
@property(readonly) NSString *functionName;
- (void)dealloc;
- (id)initWithDebugLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

