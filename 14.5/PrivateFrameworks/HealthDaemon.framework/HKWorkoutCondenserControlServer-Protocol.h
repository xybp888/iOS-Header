//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSUUID;

@protocol HKWorkoutCondenserControlServer
- (void)remote_condensableWorkoutsWithCompletion:(void (^)(HKCodableCondensedWorkoutCollection *, NSError *))arg1;
- (void)remote_condensedWorkoutsWithCompletion:(void (^)(HKCodableCondensedWorkoutCollection *, NSError *))arg1;
- (void)remote_condenseWorkoutWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

