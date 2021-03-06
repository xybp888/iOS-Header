//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTVisitPipelineModule-Protocol.h>

@class NSString, RTLocation, RTVisit, RTVisitHyperParameter;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule>
{
    RTVisit *_workingVisit;
    RTLocation *_lastPoint;
    RTVisitHyperParameter *_hyperParameter;
}

- (void).cxx_destruct;
- (id)process:(id)arg1;
- (void)clearAndAddForcedExitSignalToClusters:(id)arg1;
- (void)clearWorkingVisit;
@property(readonly, copy) NSString *description;
- (id)initWithHyperParameter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

