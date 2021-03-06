//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPApplicationDelegate.h>

@class NSArray, TSADocumentRoot;
@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSWPApplicationDelegate
{
    TSADocumentRoot *mDocumentRoot;
    id <TSADownloadDelegate> _downloadDelegate;
}

+ (id)tsa_sharedPropertiesProvider;
+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TSADownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) __weak TSADocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (void)setIWorkAuthorPrivateID:(id)arg1;
- (id)iWorkAuthorPrivateID;
@property(readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;
- (void)clearIWorkAuthorPrivateID;
- (_Bool)isValidIWorkAuthorColorIndex:(unsigned long long)arg1;
- (void)setIWorkAuthorColorIndex:(unsigned long long)arg1;
- (unsigned long long)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
@property(readonly, nonatomic) _Bool hasIWorkAuthorName;
- (_Bool)hasApplicationBadgeCount;
- (void)setApplicationBadgeCount:(unsigned long long)arg1 forCategory:(id)arg2;
- (void)setIWorkAuthorName:(id)arg1;
- (void)setICloudPreferences:(id)arg1 forKvsDocumentKey:(id)arg2;
- (id)iCloudPreferencesForKvsDocumentKey:(id)arg1;
- (id)validICloudPreferencesForPreferences:(id)arg1 invalidKeys:(id *)arg2;
- (_Bool)isICloudDocumentPreference:(id)arg1 validForKey:(id)arg2;
- (id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)arg1 isMatchingKey:(_Bool *)arg2;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (id)iCloudPreferenceKeys;
- (unsigned long long)collaboratorColorIndexForKvsDocumentKey:(id)arg1;
- (id)collaboratorNameForDocumentInfo:(id)arg1 firstName:(id *)arg2 lastName:(id *)arg3;
- (void)clearIWorkAuthorColorIndex;
- (void)clearIWorkAuthorName;
- (void)clearICloudDocumentPreferences;
- (id)documentPreferenceKeyPrefix;
- (void)registerICloudPreferences;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (_Bool)openURL:(id)arg1 displayAlertOnError:(_Bool)arg2;
@property(readonly, nonatomic) double maximumAspectRatioForPreviewImage;
@property(readonly, nonatomic) double mimimumAspectRatioForPreviewImage;
- (id)applicationTemplateVariantsForLocale:(id)arg1;
- (void)p_registerDrawableInfoClassMapping;
- (void)registerDefaults;
- (void)persistenceError:(id)arg1;
- (void)registerSOSClassTypeMappings;
@property(readonly, nonatomic) Class documentRootClass;
- (id)init;

@end

