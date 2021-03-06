//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVisibilityMonitoring-Protocol.h>

@class NSMutableArray, NSString, SXVisibilityMonitor;

@interface SXVideoPlayerVisibilityMonitor : NSObject <SXVisibilityMonitoring>
{
    SXVisibilityMonitor *_visibilityMonitor;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *didDisappearBlocks; // @synthesize didDisappearBlocks=_didDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *willDisappearBlocks; // @synthesize willDisappearBlocks=_willDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // @synthesize visiblePercentageBlocks=_visiblePercentageBlocks;
@property(readonly, nonatomic) NSMutableArray *didAppearBlocks; // @synthesize didAppearBlocks=_didAppearBlocks;
@property(readonly, nonatomic) NSMutableArray *willAppearBlocks; // @synthesize willAppearBlocks=_willAppearBlocks;
@property(retain, nonatomic) SXVisibilityMonitor *visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;
- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double visiblePercentage;
@property(readonly, nonatomic) __weak id object;
@property(readonly, nonatomic) _Bool appeared;
@property(readonly, nonatomic) unsigned long long state;
- (void)configureVisibilityMonitor:(id)arg1;
- (id)initWithVisibilityMonitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

