//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INPriceRange.h>

@class NSString;

@interface INPriceRange (MapsAdditions)
+ (id)formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2 showsCurrencySymbol:(_Bool)arg3;
@property(readonly, nonatomic) NSString *_maps_formattedStringWithDefaultShortFormatStrings;
- (id)_maps_formattedStringWithFormatStringForSingleValue:(id)arg1 formatStringForClosedRange:(id)arg2 formatStringForOpenRangeWithMaximum:(id)arg3 formatStringForOpenRangeWithMinimum:(id)arg4;
@end

