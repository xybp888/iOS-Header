//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger
{
    CLCircularRegion *_region;
    NSDate *_startTime;
    NSDate *_endTime;
}

+ (_Bool)supportsSecureCoding;
+ (id)timestampDateFormatter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasValidConfiguration;
- (void)configureWithConfiguration:(id)arg1;

@end

