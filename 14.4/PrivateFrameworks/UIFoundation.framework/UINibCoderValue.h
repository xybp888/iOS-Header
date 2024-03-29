//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UINibCoderValue : NSObject
{
    NSString *key;
    unsigned int scope;
    BOOL type;
    union {
        float floatValue;
        double doubleValue;
        unsigned long long integerValue;
        void *bytesValue;
    } value;
    unsigned long long length;
}

+ (id)nibValueRepresentingNilReferenceForKey:(id)arg1 scope:(unsigned int)arg2;
+ (id)nibValueForBytes:(const void *)arg1 length:(unsigned long long)arg2 key:(id)arg3 scope:(unsigned int)arg4;
+ (id)nibValueForFloat:(float)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForDouble:(double)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForBoolean:(_Bool)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInteger:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt64:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt32:(unsigned int)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt16:(unsigned short)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt8:(unsigned char)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForObjectReference:(long long)arg1 key:(id)arg2 scope:(unsigned int)arg3;
- (unsigned long long)byteLength;
- (void)dealloc;

@end

