//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsServicesInternal/NFCopying-Protocol.h>

@class NSDictionary, NSSExternalAnalyticsRequestMetadata, NSString;

@protocol NSSExternalAnalyticsEvent <NFCopying>
@property(readonly, copy, nonatomic) NSDictionary *requestQueryParameters;
- (NSSExternalAnalyticsRequestMetadata *)requestMetadataWithExternalAnalyticsIdentifier:(NSString *)arg1;
@end

