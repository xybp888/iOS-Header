//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSLazyPropertyList.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList
{
    NSDictionary *_plist;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;
- (_Bool)_getPropertyList:(id *)arg1;
- (id)initWithPropertyList:(id)arg1;

@end

