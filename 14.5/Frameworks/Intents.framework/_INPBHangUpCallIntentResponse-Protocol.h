//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBHangUpCallIntentResponse <NSObject>
@property(nonatomic) _Bool hasHungUpCallType;
@property(nonatomic) int hungUpCallType;
- (int)StringAsHungUpCallType:(NSString *)arg1;
- (NSString *)hungUpCallTypeAsString:(int)arg1;
@end

