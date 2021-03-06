//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCoding-Protocol.h>
#import <AVConference/NSCopying-Protocol.h>
#import <AVConference/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsTranscriptionSegment : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    NSString *_text;
    struct _NSRange _range;
    unsigned int _confidence;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithConfidence:(unsigned int)arg1 text:(id)arg2 range:(struct _NSRange)arg3;

@end

