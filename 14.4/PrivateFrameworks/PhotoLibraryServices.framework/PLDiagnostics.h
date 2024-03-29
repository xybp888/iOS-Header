//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLDiagnostics : NSObject
{
}

+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)arg1;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)arg1;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)arg1;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4;
+ (_Bool)shouldSuppressRadarUserNotificationWithMessage:(id)arg1 radarTitle:(id)arg2;
+ (void)tapToRadarWithTitle:(id)arg1 description:(id)arg2;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(CDUnknownBlockType)arg3;
+ (id)excludingNameExpression;
+ (id)matchingNameExpression;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)diagnosticsURLs;
+ (id)logDirectoryURL;

@end

