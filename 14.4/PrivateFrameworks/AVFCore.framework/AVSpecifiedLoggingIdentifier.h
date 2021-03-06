//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVLoggingIdentifier-Protocol.h>

@class AVSpecifiedLoggingIdentifierInternal, NSString;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier>
{
    AVSpecifiedLoggingIdentifierInternal *_specifiedLoggingIdentifier;
}

@property(readonly, copy) NSString *description;
@property(readonly) NSString *name;
- (void)dealloc;
- (id)initWithSpecifiedName:(id)arg1;
- (id)makeDerivedIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

