//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WFWorkflowIcon;

@interface WFHomeScreenIcon : NSObject
{
    WFWorkflowIcon *_workflowIcon;
    NSData *_customImageData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) WFWorkflowIcon *workflowIcon; // @synthesize workflowIcon=_workflowIcon;
- (id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2;

@end

