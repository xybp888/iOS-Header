//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSSnapshotBag.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9JetEngine16OverriddenAMSBag : AMSSnapshotBag
{
    MISSING_TYPE *backing;
    MISSING_TYPE *overrides;
}

- (void).cxx_destruct;
- (id)init;
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;
- (void)forwardSnapshotBagExpiredValueAccessed:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end

