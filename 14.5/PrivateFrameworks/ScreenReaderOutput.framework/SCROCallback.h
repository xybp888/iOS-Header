//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding>
{
    int _key;
    id <NSSecureCoding> _object;
    _Bool _isAtomic;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)postToHandler:(id)arg1;
- (_Bool)isAtomic;
- (void)setIsAtomic:(_Bool)arg1;
- (id)object;
- (int)key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;

@end

