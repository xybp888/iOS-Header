//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/NSSecureCoding-Protocol.h>

@interface AWAttentionEvent : NSObject <NSSecureCoding>
{
    unsigned long long _tagIndex;
    unsigned long long _eventMask;
    double _timestamp;
    id _tag;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
- (void)updateWithConfig:(id)arg1;
- (unsigned long long)tagIndex;
- (id)description;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 eventMask:(unsigned long long)arg3;
- (void)validateMask;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

