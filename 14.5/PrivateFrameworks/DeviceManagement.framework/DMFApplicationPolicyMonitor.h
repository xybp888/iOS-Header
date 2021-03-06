//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMFPolicyRegistration, NSArray, NSUUID;

@interface DMFApplicationPolicyMonitor : NSObject
{
    NSArray *_policyTypes;
    NSUUID *_identifier;
    DMFPolicyRegistration *_registration;
}

+ (void)_fetchCategoriesForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_fetchCategoriesForBundleIdentifiers:(id)arg1 withError:(id *)arg2;
+ (void)createPolicyMonitorWithPolicyChangeHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) DMFPolicyRegistration *registration; // @synthesize registration=_registration;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *policyTypes; // @synthesize policyTypes=_policyTypes;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestPoliciesForBundleIdentifiers:(id)arg1 withError:(id *)arg2;
- (void)dealloc;
- (id)_initWithPolicyChangeHandler:(CDUnknownBlockType)arg1 addingRegistration:(_Bool)arg2;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;

@end

