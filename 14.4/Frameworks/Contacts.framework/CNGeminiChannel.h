//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <NSSecureCoding>
{
    _Bool _available;
    NSString *_channelIdentifier;
    NSString *_localizedLabel;
    NSString *_localizedBadgeLabel;
    NSString *_handle;
    TUSenderIdentity *_senderIdentity;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, nonatomic) TUSenderIdentity *senderIdentity; // @synthesize senderIdentity=_senderIdentity;
@property(readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSString *localizedBadgeLabel; // @synthesize localizedBadgeLabel=_localizedBadgeLabel;
@property(readonly, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(readonly, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

