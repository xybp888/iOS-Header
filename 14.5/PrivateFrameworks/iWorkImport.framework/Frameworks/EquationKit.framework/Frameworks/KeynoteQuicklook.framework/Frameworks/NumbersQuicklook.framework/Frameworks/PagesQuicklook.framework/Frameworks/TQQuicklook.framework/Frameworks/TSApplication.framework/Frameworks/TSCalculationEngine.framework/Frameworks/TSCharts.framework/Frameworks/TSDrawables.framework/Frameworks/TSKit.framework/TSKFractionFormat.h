//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@interface TSKFractionFormat : TSKFormat <NSCopying>
{
    _Bool _usePlusSign;
    int _fractionAccuracy;
}

@property(readonly, nonatomic) _Bool usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) int fractionAccuracy; // @synthesize fractionAccuracy=_fractionAccuracy;
- (id)asFractionFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFractionAccuracy:(int)arg1;
- (id)initWithFormatType:(unsigned int)arg1;

@end

