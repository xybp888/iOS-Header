//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTEndPointCandidate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableEndPointCandidate : FTEndPointCandidate
{
}

@property(nonatomic) int processed_audio_duration_ms;
@property(nonatomic) int end_point_likelihood;
@property(copy, nonatomic) NSString *return_str;
@property(nonatomic) int return_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

