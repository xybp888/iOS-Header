//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSNumber;

@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent
{
    NSNumber *_unknownPersonsTagCount;
    NSNumber *_openURLSuccess;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *openURLSuccess; // @synthesize openURLSuccess=_openURLSuccess;
@property(retain, nonatomic) NSNumber *unknownPersonsTagCount; // @synthesize unknownPersonsTagCount=_unknownPersonsTagCount;
- (id)payload;
- (id)initWithData:(id)arg1;

@end

