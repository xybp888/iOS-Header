//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPushToken : NSObject
{
    NSString *_apsEnvironmentString;
    NSData *_apsToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

