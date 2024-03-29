//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2LoggingObject.h>

#import <CoreHAP/HAP2EncodedRequest-Protocol.h>

@class HAP2AccessoryServerEncodingThreadBTLERequest, NSString;

@interface HAP2EncodedRequestThread : HAP2LoggingObject <HAP2EncodedRequest>
{
    _Bool _enforcePDUBodyLength;
    HAP2AccessoryServerEncodingThreadBTLERequest *_btleRequest;
}

+ (unsigned long long)hap2RequestTypeFromBTLERequestType:(unsigned char)arg1;
+ (unsigned char)btleRequestTypeFromHAP2RequestType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HAP2AccessoryServerEncodingThreadBTLERequest *btleRequest; // @synthesize btleRequest=_btleRequest;
- (id)serialize;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)initWithBTLERequest:(id)arg1 enforcePDUBodyLength:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

