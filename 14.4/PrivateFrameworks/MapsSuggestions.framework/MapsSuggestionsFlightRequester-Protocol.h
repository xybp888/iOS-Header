//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class NSDate, NSString;

@protocol MapsSuggestionsFlightRequester <MapsSuggestionsObject>
- (_Bool)requestFlightsWithFullFlightNumber:(NSString *)arg1 departureDate:(NSDate *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
@end

