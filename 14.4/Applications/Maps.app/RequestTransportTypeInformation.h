//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface RequestTransportTypeInformation : NSObject
{
    NSDictionary *_transportTypeInfoProviders;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *transportTypeInfoProviders; // @synthesize transportTypeInfoProviders=_transportTypeInfoProviders;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)requestInfoProviderForTransportType:(long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end

