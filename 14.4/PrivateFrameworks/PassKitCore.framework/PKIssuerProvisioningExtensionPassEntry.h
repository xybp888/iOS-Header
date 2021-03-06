//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKIssuerProvisioningExtensionPassEntry : NSObject
{
    NSString *_identifier;
    NSString *_title;
    struct CGImage *_art;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) struct CGImage *art; // @synthesize art=_art;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(struct CGImage *)arg4;
- (id)init;
- (id)paymentPassEntry;

@end

