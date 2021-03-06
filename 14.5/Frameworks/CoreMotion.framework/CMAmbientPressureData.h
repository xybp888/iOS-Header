//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

#import <CoreMotion/SRSampleDirectExporting-Protocol.h>

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_c3b9c2ee ambientPressure;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(CDStruct_ebf20f05)arg1 andTimestamp:(double)arg2;
- (_Bool)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1;

@end

