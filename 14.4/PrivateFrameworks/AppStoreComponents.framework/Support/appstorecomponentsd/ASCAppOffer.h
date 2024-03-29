//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCOffer-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ASCAppOffer : NSObject <ASCOffer, NSSecureCoding, NSCopying>
{
    ASCAdamID *_id;
    NSDictionary *_titles;
    NSDictionary *_subtitles;
    long long _flags;
    NSNumber *_ageRating;
    NSArray *_metrics;
    NSString *_baseBuyParams;
    NSString *_metricsBuyParams;
    NSDictionary *_additionalHeaders;
    NSURL *_preflightPackageURL;
    NSString *_bundleID;
    NSString *_itemName;
    NSString *_vendorName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSURL *preflightPackageURL; // @synthesize preflightPackageURL=_preflightPackageURL;
@property(readonly, copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(readonly, copy, nonatomic) NSString *metricsBuyParams; // @synthesize metricsBuyParams=_metricsBuyParams;
@property(readonly, copy, nonatomic) NSString *baseBuyParams; // @synthesize baseBuyParams=_baseBuyParams;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 baseBuyParams:(id)arg7 metricsBuyParams:(id)arg8 additionalHeaders:(id)arg9 preflightPackageURL:(id)arg10 bundleID:(id)arg11 itemName:(id)arg12 vendorName:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

