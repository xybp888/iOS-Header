//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTextToSpeechRouterStreamingStreamingResponse.h>

@class FTBeginTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechRouterStreamingStreamingResponse : FTTextToSpeechRouterStreamingStreamingResponse
{
}

@property(copy, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property(copy, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

