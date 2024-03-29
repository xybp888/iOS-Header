//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NWEndpoint, NWParameters, NWPath;
@protocol NWTCPConnectionAuthenticationDelegate, OS_nw_connection;

@interface NWTCPConnection : NSObject <NWPrettyDescription>
{
    _Bool _viable;
    _Bool _hasBetterPath;
    long long _state;
    NWEndpoint *_endpoint;
    NSError *_internalError;
    NSObject<OS_nw_connection> *_internalConnection;
    id <NWTCPConnectionAuthenticationDelegate> _delegate;
    NWParameters *_parameters;
}

+ (id)stringFromNWTCPConnectionState:(long long)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NWParameters *parameters; // @synthesize parameters=_parameters;
@property __weak id <NWTCPConnectionAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_nw_connection> *internalConnection; // @synthesize internalConnection=_internalConnection;
@property(retain) NSError *internalError; // @synthesize internalError=_internalError;
@property(retain, nonatomic) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) _Bool hasBetterPath; // @synthesize hasBetterPath=_hasBetterPath;
@property(nonatomic, getter=isViable) _Bool viable; // @synthesize viable=_viable;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSDictionary *TCPInfo;
@property(readonly, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property(readonly, nonatomic) int multipathPrimarySubflowInterfaceIndex;
@property(readonly, nonatomic) unsigned long long multipathConnectedSubflowCount;
@property(readonly, nonatomic) unsigned long long multipathSubflowCount;
@property(readonly, nonatomic) _Bool isMultipath;
@property(readonly, nonatomic) _Bool TFOSucceeded;
- (_Bool)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg1;
- (_Bool)startInternal;
- (void)setupEventHandler;
- (void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeClose;
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readLength:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSData *txtRecord;
@property(readonly, nonatomic) NWEndpoint *remoteAddress;
@property(readonly, nonatomic) NWEndpoint *localAddress;
@property(readonly, nonatomic) NWPath *connectedPath;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (void)dealloc;
- (id)initWithUpgradeForConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithAcceptedInternalConnection:(id)arg1;

@end

