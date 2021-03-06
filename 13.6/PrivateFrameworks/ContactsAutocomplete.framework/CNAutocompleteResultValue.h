//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNAutocompleteResultValue : NSObject
{
    NSString *_address;
    long long _addressType;
    NSString *_instantMessageAddressService;
    NSString *_identifier;
    NSString *_label;
    NSString *_stringForHashingMemo;
}

+ (id)normalizedAddressForValue:(id)arg1;
+ (id)stringForHashingValue:(id)arg1;
+ (id)resultValueWithAddress:(id)arg1 addressType:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *stringForHashingMemo; // @synthesize stringForHashingMemo=_stringForHashingMemo;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *instantMessageAddressService; // @synthesize instantMessageAddressService=_instantMessageAddressService;
@property long long addressType; // @synthesize addressType=_addressType;
@property(copy) NSString *address; // @synthesize address=_address;
- (id)addressTypeDescription;
- (id)description;
- (_Bool)addressExactlyMatchesSearchTerm:(id)arg1;
- (id)stringForSorting;
- (id)stringForHashing;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

