//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantCardServiceSupport/CRSCardServing-Protocol.h>
#import <AssistantCardServiceSupport/CRSIdentifiedServing-Protocol.h>

@class NSString;

@interface ACSCardService : NSObject <CRSCardServing, CRSIdentifiedServing>
{
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)canSatisfyCardRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

