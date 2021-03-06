//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>
#import <LocationSupport/CLIntersiloUniverse-Protocol.h>

@class CLServiceVendor, CLSilo, NSString;
@protocol CLIntersiloUniverse;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse>
{
    CLSilo *_silo;
    CLServiceVendor *_vendor;
    _Bool _valid;
}

+ (_Bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
- (void).cxx_destruct;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) CLServiceVendor *vendor; // @synthesize vendor=_vendor;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) id <CLIntersiloUniverse> universe;
- (void)setVendor:(id)arg1;
- (void)setSilo:(id)arg1;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

