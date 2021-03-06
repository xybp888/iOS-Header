//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying>
{
    int _state;
    BRFieldCKInfo *_ckInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerZoneHealthState:(id)arg1;
- (id)initWithCKInfo:(id)arg1 state:(int)arg2;

@end

