//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFBaseLibraryWorkflowCellDelegate-Protocol.h>

@class WFLibraryWorkflowCell, WFWorkflowReference;

@protocol WFLibraryWorkflowCellDelegate <WFBaseLibraryWorkflowCellDelegate>

@optional
- (void)workflowCellDidRequestComposeUI:(WFLibraryWorkflowCell *)arg1 forWorkflowReference:(WFWorkflowReference *)arg2;
- (void)workflowCellDidRequestDelete:(WFLibraryWorkflowCell *)arg1;
- (void)workflowCellDidRequestDuplicate:(WFLibraryWorkflowCell *)arg1;
- (void)workflowCellDidRequestRename:(WFLibraryWorkflowCell *)arg1;
@end

