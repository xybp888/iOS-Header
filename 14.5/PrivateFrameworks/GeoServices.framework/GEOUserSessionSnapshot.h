//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOUserSessionEntity;

@interface GEOUserSessionSnapshot : NSObject
{
    GEOUserSessionEntity *_shortSessionEntity;
    GEOUserSessionEntity *_longSessionEntity;
    GEOUserSessionEntity *_navSessionEntity;
    GEOUserSessionEntity *_cohortSessionEntity;
    GEOUserSessionEntity *_fifteenMonthSessionEntity;
    double _usageEventTime;
}

- (void).cxx_destruct;
@property(nonatomic) double usageEventTime; // @synthesize usageEventTime=_usageEventTime;
@property(retain, nonatomic) GEOUserSessionEntity *fifteenMonthSessionEntity; // @synthesize fifteenMonthSessionEntity=_fifteenMonthSessionEntity;
@property(retain, nonatomic) GEOUserSessionEntity *cohortSessionEntity; // @synthesize cohortSessionEntity=_cohortSessionEntity;
@property(retain, nonatomic) GEOUserSessionEntity *navSessionEntity; // @synthesize navSessionEntity=_navSessionEntity;
@property(retain, nonatomic) GEOUserSessionEntity *longSessionEntity; // @synthesize longSessionEntity=_longSessionEntity;
@property(retain, nonatomic) GEOUserSessionEntity *shortSessionEntity; // @synthesize shortSessionEntity=_shortSessionEntity;
- (id)initWithShortSessionEntity:(id)arg1 longSessionEntity:(id)arg2 navSessionEntity:(id)arg3 cohortSessionEntity:(id)arg4 fifteenMonthSessionEntity:(id)arg5;

@end

