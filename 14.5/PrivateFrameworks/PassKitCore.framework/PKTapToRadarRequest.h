//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKTapToRadarRequest : NSObject <NSSecureCoding>
{
    NSString *_reason;
    NSString *_relatedRadar;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *relatedRadar; // @synthesize relatedRadar=_relatedRadar;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

