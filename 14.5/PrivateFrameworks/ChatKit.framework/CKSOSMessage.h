//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class CLLocation, NSArray, NSString;

@interface CKSOSMessage : NSObject <NSCopying>
{
    _Bool _useStandalone;
    CLLocation *_location;
    NSString *_locationURL;
    NSArray *_recipients;
    CDUnknownBlockType _failureBlock;
    NSArray *_handles;
    NSString *_message;
    NSString *_smsMessage;
    NSString *_mmsMessage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mmsMessage; // @synthesize mmsMessage=_mmsMessage;
@property(copy, nonatomic) NSString *smsMessage; // @synthesize smsMessage=_smsMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic, getter=handles) NSArray *handles; // @synthesize handles=_handles;
@property(nonatomic) _Bool useStandalone; // @synthesize useStandalone=_useStandalone;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *locationURL; // @synthesize locationURL=_locationURL;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSMSMessage:(id)arg1 mmsMessage:(id)arg2 recipients:(id)arg3;
- (id)initWithMessage:(id)arg1 recipients:(id)arg2;

@end

