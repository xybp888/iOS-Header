//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXParsedDate-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@interface SXParsedDate : NSObject <SXParsedDate>
{
    _Bool _containedTime;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) _Bool containedTime; // @synthesize containedTime=_containedTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithDate:(id)arg1 containedTime:(_Bool)arg2 timeZone:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

