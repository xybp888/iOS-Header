//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IntlPreferences/IPNamePreferenceInfoProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IPOSXABNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>
{
}

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;
+ (id)canonicalNameToNativeKeyName;
+ (id)nativeKeyNameToCanonicalKeyName;
+ (id)domain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

