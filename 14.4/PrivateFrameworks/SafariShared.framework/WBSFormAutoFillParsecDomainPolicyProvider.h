//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackDomainPolicyProvider-Protocol.h>

@class NSString;
@protocol WBSCrowdsourcedFeedbackAllowList;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider>
{
    id <WBSCrowdsourcedFeedbackAllowList> _feedbackAllowList;
}

- (void).cxx_destruct;
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;
- (id)initWithFeedbackAllowList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

