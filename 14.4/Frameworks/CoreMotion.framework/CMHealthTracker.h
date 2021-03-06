//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject
{
    CMHealthTrackerInternal *_internal;
}

+ (long long)isAuthorizedForVO2MaxData;
+ (_Bool)isVO2MaxDataAvailable;
+ (long long)isAuthorizedForMetMinutes;
+ (_Bool)isMetMinutesAvailable;
@property(readonly, nonatomic) CMHealthTrackerInternal *_internal; // @synthesize _internal;
- (void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

