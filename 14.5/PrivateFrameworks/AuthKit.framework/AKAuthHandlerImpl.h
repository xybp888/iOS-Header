//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthHandler-Protocol.h>

@class NSString;

@interface AKAuthHandlerImpl : NSObject <AKAuthHandler>
{
}

- (void)reauthenticateWithContext:(id)arg1 completionWithResults:(CDUnknownBlockType)arg2;
- (void)reauthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)buildReauthenticationContextFromContext:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

