//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKInstallSheetStatusUpdateRequest : SKRequest
{
    _Bool _isInstallSheetOpen;
    CDUnknownBlockType _completionHandler;
    NSString *_bundleId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInstallSheetOpen; // @synthesize isInstallSheetOpen=_isInstallSheetOpen;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

