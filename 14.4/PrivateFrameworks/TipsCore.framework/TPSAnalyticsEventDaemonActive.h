//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent
{
    _Bool _alreadyRunning;
    NSString *_reason;
}

+ (id)eventWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;

@end

