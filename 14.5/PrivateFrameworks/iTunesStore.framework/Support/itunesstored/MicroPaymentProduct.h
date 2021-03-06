//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MicroPaymentProductDiscount, MicroPaymentProductSubscriptionPeriod, NSArray, NSNumber, NSString;

@interface MicroPaymentProduct : NSObject
{
    long long _contentSize;
    NSString *_contentVersion;
    _Bool _hosted;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSNumber *_price;
    NSString *_productIdentifier;
    NSArray *_discounts;
    MicroPaymentProductDiscount *_introductoryPrice;
    NSString *_subscriptionGroupIdentifier;
    MicroPaymentProductSubscriptionPeriod *_subscriptionPeriod;
}

+ (id)periodFromISO8601String:(id)arg1;
@property(retain, nonatomic) MicroPaymentProductSubscriptionPeriod *subscriptionPeriod; // @synthesize subscriptionPeriod=_subscriptionPeriod;
@property(copy, nonatomic) NSString *subscriptionGroupIdentifier; // @synthesize subscriptionGroupIdentifier=_subscriptionGroupIdentifier;
@property(retain, nonatomic) MicroPaymentProductDiscount *introductoryPrice; // @synthesize introductoryPrice=_introductoryPrice;
@property(retain, nonatomic) NSArray *discounts; // @synthesize discounts=_discounts;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(nonatomic, getter=isHosted) _Bool hosted; // @synthesize hosted=_hosted;
@property(copy, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(nonatomic) long long contentSize; // @synthesize contentSize=_contentSize;
- (id)copyProduct;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

