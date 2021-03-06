//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXFeedbackTapToRadarUtilities : NSObject
{
}

+ (id)originalImageFileForAsset:(id)arg1;
+ (id)detailedDebugDescriptionFileForAsset:(id)arg1;
+ (id)_tempDirectoryURL;
+ (id)defaultTitlePrefix;
+ (id)defaultDescription;
+ (id)captureScreenshot;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 screenshotURLs:(id)arg8 attachmentURLs:(id)arg9 includeSysDiagnose:(_Bool)arg10 includeInternalRelease:(_Bool)arg11 additionalExtensionIdentifiers:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (void)presentTermsAndConditionsForUIViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)internalReleaseAgreement;
+ (id)alertControllerWithPrivacyMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)summaryDescription;
+ (id)attachmentURLForDiagnosticDictionaries:(id)arg1 descriptionName:(id)arg2;

@end

