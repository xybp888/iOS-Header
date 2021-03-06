//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSProtobuf, NSNumber, NSString, PBCodable;

@interface BLTRemoteRequest : NSObject
{
    _Bool _allowCloudDelivery;
    _Bool _nonWaking;
    unsigned short _type;
    PBCodable *_protobuf;
    CDUnknownBlockType _didSend;
    NSNumber *_timeout;
    CDUnknownBlockType _didQueue;
    NSString *_requestDescription;
    NSString *_uniqueID;
    CDUnknownBlockType _responseCompletion;
    IDSProtobuf *_responseToRequest;
}

+ (id)remoteRequestWithProtobuf:(id)arg1 type:(unsigned short)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IDSProtobuf *responseToRequest; // @synthesize responseToRequest=_responseToRequest;
@property(nonatomic) _Bool nonWaking; // @synthesize nonWaking=_nonWaking;
@property(copy, nonatomic) CDUnknownBlockType responseCompletion; // @synthesize responseCompletion=_responseCompletion;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) _Bool allowCloudDelivery; // @synthesize allowCloudDelivery=_allowCloudDelivery;
@property(copy, nonatomic) NSString *requestDescription; // @synthesize requestDescription=_requestDescription;
@property(copy, nonatomic) CDUnknownBlockType didQueue; // @synthesize didQueue=_didQueue;
@property(retain, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType didSend; // @synthesize didSend=_didSend;
@property(nonatomic) unsigned short type; // @synthesize type=_type;
@property(retain, nonatomic) PBCodable *protobuf; // @synthesize protobuf=_protobuf;
- (id)description;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2;

@end

