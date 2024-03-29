//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileMailUI/EMVIPManager-Protocol.h>

@class EAEmailAddressSet, NSLock, NSSet, NSString;
@protocol EMVIPManager, OS_dispatch_queue;

@interface VIPManager : NSObject <EMVIPManager>
{
    NSLock *_abPersonByVIPIdentifierLock;
    struct __CFDictionary *_abPersonByVIPIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id <EMVIPManager> _backingManager;
}

+ (id)defaultInstance;
+ (void)setBackingManager:(id)arg1;
+ (struct os_unfair_lock_s *)defaultInstanceLock;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <EMVIPManager> backingManager; // @synthesize backingManager=_backingManager;
- (id)allVIPEmailAddressesCriterion;
- (id)vipCriteria;
- (id)criterionForEmailAddresses:(id)arg1;
- (const void *)existingPersonForVIP:(id)arg1 usingAddressBook:(void *)arg2;
- (id)vipForEmailAddresses:(id)arg1 andDisplayNames:(id)arg2;
- (id)sortedVIPs;
- (void)deleteVIPWithIdentifier:(id)arg1;
- (void)saveVIP:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (_Bool)isVIPAddress:(id)arg1;
- (id)vipWithIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPs;
@property(readonly, nonatomic) _Bool hasVIPs;
- (id)initWithBackingManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

