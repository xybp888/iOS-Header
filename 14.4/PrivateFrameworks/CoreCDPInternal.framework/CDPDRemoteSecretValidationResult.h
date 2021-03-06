//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDevice, NSDictionary, NSString, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject
{
    _Bool _userDidCancel;
    _Bool _userDidReset;
    unsigned long long _secretType;
    CDPDevice *_device;
    NSString *_validSecret;
    NSDictionary *_recoveredInfo;
    OTClique *_recoveredClique;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OTClique *recoveredClique; // @synthesize recoveredClique=_recoveredClique;
@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
@property(copy, nonatomic) NSString *validSecret; // @synthesize validSecret=_validSecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property(nonatomic) unsigned long long secretType; // @synthesize secretType=_secretType;

@end

