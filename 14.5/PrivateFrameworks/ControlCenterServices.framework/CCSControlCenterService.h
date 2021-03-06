//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject
{
    CCSRemoteServiceConnection *_connection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setVisibility:(_Bool)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 force:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_init;

@end

