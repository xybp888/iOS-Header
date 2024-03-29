//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSUserDefaults, SGContentAdmissionKVOObserver;

@interface SGContentAdmission : NSObject
{
    NSSet *_disabledBundleIdentifiers;
    NSUserDefaults *_defaults;
    SGContentAdmissionKVOObserver *_kvoObserver;
}

+ (void)migrateForTests;
+ (void)clearTestSettings;
+ (_Bool)isSupportedSearchableItemBundleIdentifier:(id)arg1;
+ (_Bool)shouldAdmitContentFromBundleIdentifier:(id)arg1;
+ (void)disableBundleIdentifier:(id)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_clearTestSettings;
- (void)_migrateIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldAdmitContentFromBundleIdentifier:(id)arg1;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (id)init;

@end

