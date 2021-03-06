//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRKKeychainPasswordFacade : NSObject
{
    NSDictionary *_baseQueryAttributes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *baseQueryAttributes; // @synthesize baseQueryAttributes=_baseQueryAttributes;
- (id)makeQueryWithAttributes:(id)arg1;
- (void)addAccessibilityAttributeToQuery:(id)arg1;
- (id)errorForPasswordStatus:(int)arg1;
- (id)passwordForService:(id)arg1 error:(id *)arg2;
- (_Bool)removePasswordForService:(id)arg1 error:(id *)arg2;
- (_Bool)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
- (id)passwordForService:(id)arg1;
- (void)setPassword:(id)arg1 forService:(id)arg2 accessGroup:(id)arg3;
- (id)initWithBaseQueryAttributes:(id)arg1;

@end

