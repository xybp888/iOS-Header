//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFContentClassesToolbar.h>

@class WFWorkflow;

@interface WFUpdatingContentClassesToolbar : WFContentClassesToolbar
{
    WFWorkflow *_workflow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (_Bool)accessibilityElementsHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

