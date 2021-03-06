//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest
{
    AAGrandSlamSigner *_grandSlamSigner;
    NSString *_heartbeatToken;
}

+ (Class)responseClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3;

@end

