//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIAnyPersistedTask;

@interface TRISequencePersistedTask : TRIPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TRIAnyPersistedTask *dependentTask; // @dynamic dependentTask;
@property(nonatomic) _Bool hasDependentTask; // @dynamic hasDependentTask;
@property(nonatomic) _Bool hasTask; // @dynamic hasTask;
@property(retain, nonatomic) TRIAnyPersistedTask *task; // @dynamic task;

@end

