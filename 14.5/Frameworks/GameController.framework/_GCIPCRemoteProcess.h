//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCIPCProcess-Protocol.h>

@class NSArray, NSMutableSet, NSString;

@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess>
{
    int _auditSessionIdentifier;
    int _processIdentifier;
    unsigned int _effectiveUserIdentifier;
    unsigned int _effectiveGroupIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_connections;
    NSMutableSet *_connectionInvalidationRegistrations;
    CDStruct_4c969caf _auditToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *connectionInvalidationRegistrations; // @synthesize connectionInvalidationRegistrations=_connectionInvalidationRegistrations;
@property(copy) NSArray *connections; // @synthesize connections=_connections;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) unsigned int effectiveGroupIdentifier; // @synthesize effectiveGroupIdentifier=_effectiveGroupIdentifier;
@property(readonly) unsigned int effectiveUserIdentifier; // @synthesize effectiveUserIdentifier=_effectiveUserIdentifier;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly) int auditSessionIdentifier; // @synthesize auditSessionIdentifier=_auditSessionIdentifier;
@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (id)debugDescription;
- (id)redactedDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToProcess:(id)arg1;
- (void)addConnection:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

