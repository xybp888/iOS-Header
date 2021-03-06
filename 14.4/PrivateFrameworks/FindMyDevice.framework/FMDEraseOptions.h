//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@interface FMDEraseOptions : NSObject <NSSecureCoding>
{
    _Bool _useObliteration;
    _Bool _brickDevice;
    _Bool _hasBridgeCoProcessor;
    double _customDelay;
    double _maxDelayInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasBridgeCoProcessor; // @synthesize hasBridgeCoProcessor=_hasBridgeCoProcessor;
@property(nonatomic) double maxDelayInterval; // @synthesize maxDelayInterval=_maxDelayInterval;
@property(nonatomic) double customDelay; // @synthesize customDelay=_customDelay;
@property(nonatomic) _Bool brickDevice; // @synthesize brickDevice=_brickDevice;
@property(nonatomic) _Bool useObliteration; // @synthesize useObliteration=_useObliteration;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

