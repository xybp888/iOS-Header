//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSDClient.h>

#import <CoreServices/_LSDReadProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>
{
}

- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getBoundIconInfoForDocumentProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTypeRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(_Bool)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;

@end

