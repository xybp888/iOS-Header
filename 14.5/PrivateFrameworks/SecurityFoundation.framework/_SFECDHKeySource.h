//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject
{
    id _ecdhKeySourceInternal;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _SFECPublicKey *remotePublicKey;
@property(retain, nonatomic) _SFECKeyPair *localKeyPair;
- (id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2;

@end

