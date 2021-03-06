//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase
{
    NSArray *_statusInactiveEvents;
    NSArray *_statusUnknownEvents;
}

+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *statusUnknownEvents; // @synthesize statusUnknownEvents=_statusUnknownEvents;
@property(copy, nonatomic) NSArray *statusInactiveEvents; // @synthesize statusInactiveEvents=_statusInactiveEvents;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

