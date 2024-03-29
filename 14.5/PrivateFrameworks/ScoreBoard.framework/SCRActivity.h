//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScoreBoard/BSDescriptionProviding-Protocol.h>
#import <ScoreBoard/NSCopying-Protocol.h>
#import <ScoreBoard/SCRSchedulable-Protocol.h>

@class NSString, SCRSchedulingConfiguration;

@interface SCRActivity : NSObject <NSCopying, BSDescriptionProviding, SCRSchedulable>
{
    SCRSchedulingConfiguration *_schedulingConfiguration;
    NSString *_identifier;
    NSString *_name;
    CDUnknownBlockType _activationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType activationBlock; // @synthesize activationBlock=_activationBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) SCRSchedulingConfiguration *schedulingConfiguration; // @synthesize schedulingConfiguration=_schedulingConfiguration;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 earliestStartDate:(id)arg2 schedulingWindow:(double)arg3 activationBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

