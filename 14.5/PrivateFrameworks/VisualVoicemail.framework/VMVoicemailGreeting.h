//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@class NSURL;

@interface VMVoicemailGreeting : NSObject <NSSecureCoding>
{
    double _duration;
    unsigned long long _type;
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

