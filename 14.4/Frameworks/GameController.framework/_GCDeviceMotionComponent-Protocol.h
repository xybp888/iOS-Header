//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCDeviceComponent-Protocol.h>

@protocol _GCMotionEventSourceDescription;

@protocol _GCDeviceMotionComponent <_GCDeviceComponent>
@property(nonatomic) _Bool sensorsActive;
@property(readonly, nonatomic) id <_GCMotionEventSourceDescription> motionEventSource;
@property(copy, nonatomic) CDUnknownBlockType deviceMotionServiceConnectedHandler;
@end

