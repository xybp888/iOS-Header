//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrackingAvoidance/NSCopying-Protocol.h>
#import <TrackingAvoidance/NSObject-Protocol.h>
#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol TAEventProtocol <NSObject, NSSecureCoding, NSCopying>
- (NSString *)description;
- (NSDictionary *)descriptionDictionary;
- (NSDate *)getDate;

@optional
- (unsigned long long)getEventSubtype;
@end

