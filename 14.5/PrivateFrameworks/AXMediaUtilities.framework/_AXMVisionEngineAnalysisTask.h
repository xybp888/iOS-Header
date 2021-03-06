//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMTask.h>

@class AXMSourceNode, AXMVisionPipelineContext, NSUUID;

@interface _AXMVisionEngineAnalysisTask : AXMTask
{
    NSUUID *_identifier;
    AXMVisionPipelineContext *_context;
    AXMSourceNode *_source;
}

+ (id)itemWithSource:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AXMSourceNode *source; // @synthesize source=_source;
@property(retain, nonatomic) AXMVisionPipelineContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithSource:(id)arg1 context:(id)arg2;

@end

