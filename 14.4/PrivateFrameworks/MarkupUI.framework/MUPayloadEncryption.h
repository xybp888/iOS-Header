//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPayloadEncryption : NSObject
{
    _Bool _keyInitialized;
    _Bool _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;
- (void)initializeKey;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)init;

@end

