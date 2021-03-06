//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>

@class MTTrigger, NSString;
@protocol MTScheduleable;

@interface MTScheduledObject : NSObject <NAEquatable, NSCopying>
{
    id <MTScheduleable> _scheduleable;
    MTTrigger *_trigger;
}

+ (unsigned long long)scheduledTypeForTriggerType:(unsigned long long)arg1;
+ (id)scheduledObjectForScheduleable:(id)arg1 trigger:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) MTTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) id <MTScheduleable> scheduleable; // @synthesize scheduleable=_scheduleable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToScheduledObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isVisible;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithScheduleable:(id)arg1 trigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

