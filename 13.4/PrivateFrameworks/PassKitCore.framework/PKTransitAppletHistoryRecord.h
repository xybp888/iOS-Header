//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSDecimalNumber, NSNumber, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _transitModifiers;
    _Bool _appletStateDirty;
    NSNumber *_historySequenceNumber;
    unsigned long long _type;
    unsigned long long _subtype;
    unsigned long long _detail;
    NSDate *_time;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSDecimalNumber *_amount;
    NSNumber *_loyaltyAmount;
    NSNumber *_cityCode;
    NSData *_startStation;
    NSData *_endStation;
    NSArray *_amounts;
    NSString *_transitDetail;
    long long _recordType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long recordType; // @synthesize recordType=_recordType;
@property(copy, nonatomic) NSString *transitDetail; // @synthesize transitDetail=_transitDetail;
@property(copy, nonatomic) NSArray *amounts; // @synthesize amounts=_amounts;
@property(nonatomic) _Bool appletStateDirty; // @synthesize appletStateDirty=_appletStateDirty;
@property(copy, nonatomic) NSData *endStation; // @synthesize endStation=_endStation;
@property(copy, nonatomic) NSData *startStation; // @synthesize startStation=_startStation;
@property(copy, nonatomic) NSNumber *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSNumber *loyaltyAmount; // @synthesize loyaltyAmount=_loyaltyAmount;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSNumber *loyaltyBalance; // @synthesize loyaltyBalance=_loyaltyBalance;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) unsigned long long detail; // @synthesize detail=_detail;
@property(nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *historySequenceNumber; // @synthesize historySequenceNumber=_historySequenceNumber;
- (unsigned long long)hash;
- (_Bool)isEqualToTransitAppletHistoryRecord:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setTransactionHistoryDetailsFromString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)transactionAmounts;
@property(readonly, nonatomic) unsigned long long transitTransactionModifier;
@property(readonly, nonatomic) long long transitTransactionSubtype;
@property(readonly, nonatomic) long long paymentTransactionType;
- (id)concreteTransactionWithCurrency:(id)arg1;
- (id)felicaHistoryRecord;

@end

