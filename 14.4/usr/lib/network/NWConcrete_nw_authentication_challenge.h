//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_authentication_challenge-Protocol.h>

@class NSString, NWConcrete_nw_authentication_protection_space;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge>
{
    NWConcrete_nw_authentication_protection_space *protection_space;
    void *http_message;
    int type;
    unsigned int attempt_count;
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

