//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <WorkflowKit/WFOutOfProcessWorkflowControllerHost-Protocol.h>

@class NSString;
@protocol WFOutOfProcessWorkflowControllerHost;

@interface WFBackgroundShortcutRunnerHostExtensionContext : NSExtensionContext <WFOutOfProcessWorkflowControllerHost>
{
    id <WFOutOfProcessWorkflowControllerHost> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WFOutOfProcessWorkflowControllerHost> delegate; // @synthesize delegate=_delegate;
- (void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(_Bool)arg2 reference:(id)arg3;
- (void)workflowDidStartFromWorkflowReference:(id)arg1 attribution:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

