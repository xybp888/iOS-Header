//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSString;

@interface GEOResourceFetchRequest : GEOXPCRequest <GEOXPCRequest>
{
    _Bool _force;
    NSArray *_resources;
    GEOResourceManifestConfiguration *_manifestConfiguration;
}

+ (Class)replyClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (_Bool)expectsReply;
- (_Bool)isValid;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

