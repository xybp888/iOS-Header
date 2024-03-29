//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <WorkflowKit/WFWorkflowReferencing-Protocol.h>

@class NSArray, NSString, WFWorkflow;

@interface WFWorkflowPickerParameter : WFEnumerationParameter <WFWorkflowReferencing>
{
    NSArray *_possibleStates;
    WFWorkflow *_workflow;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (_Bool)parameterStateIsValid:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)workflowForState:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

