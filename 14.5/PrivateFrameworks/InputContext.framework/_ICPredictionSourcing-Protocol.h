//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, _ICProactiveTrigger, _ICSearchContext;

@protocol _ICPredictionSourcing
- (void)propogateMetrics:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (_Bool)doesSupportTriggerSourceType:(unsigned char)arg1;
- (void)hibernate;
- (void)warmUp;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(void (^)(NSArray *))arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(void (^)(NSArray *))arg2;
- (void)predictedItemsWithProactiveTrigger:(_ICProactiveTrigger *)arg1 searchContext:(_ICSearchContext *)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
- (NSString *)name;
@end

