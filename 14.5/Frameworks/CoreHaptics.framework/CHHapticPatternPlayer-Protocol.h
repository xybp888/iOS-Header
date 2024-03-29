//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHaptics/NSObject-Protocol.h>

@class CHHapticParameterCurve, NSArray;

@protocol CHHapticPatternPlayer <NSObject>
@property _Bool isMuted;
- (_Bool)cancelAndReturnError:(id *)arg1;
- (_Bool)scheduleParameterCurve:(CHHapticParameterCurve *)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)sendParameters:(NSArray *)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;
@end

