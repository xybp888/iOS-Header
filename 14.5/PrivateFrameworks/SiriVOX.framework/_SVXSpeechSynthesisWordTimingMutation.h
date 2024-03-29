//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXSpeechSynthesisWordTimingMutating-Protocol.h>

@class NSString, SVXSpeechSynthesisWordTiming;

__attribute__((visibility("hidden")))
@interface _SVXSpeechSynthesisWordTimingMutation : NSObject <SVXSpeechSynthesisWordTimingMutating>
{
    SVXSpeechSynthesisWordTiming *_baseModel;
    struct _NSRange _range;
    double _timeInterval;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRange:1;
        unsigned int hasTimeInterval:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setTimeInterval:(double)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

