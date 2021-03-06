//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface EKDayOccurrenceContentPayload : NSObject
{
    long long _requestId;
    unsigned long long _requestOptions;
    UIImage *_backgroundImage;
    UIImage *_textImage;
    UIImage *_travelTimeImage;
    NSAttributedString *_travelTimeString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *travelTimeString; // @synthesize travelTimeString=_travelTimeString;
@property(readonly, nonatomic) UIImage *travelTimeImage; // @synthesize travelTimeImage=_travelTimeImage;
@property(readonly, nonatomic) UIImage *textImage; // @synthesize textImage=_textImage;
@property(readonly, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) unsigned long long requestOptions; // @synthesize requestOptions=_requestOptions;
@property(readonly, nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (id)initWithRequestId:(long long)arg1 requestOptions:(unsigned long long)arg2 backgroundImage:(id)arg3 textImage:(id)arg4 travelTimeImage:(id)arg5 travelTimeString:(id)arg6;

@end

