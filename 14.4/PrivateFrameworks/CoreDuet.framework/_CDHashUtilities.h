//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDHashUtilities : NSObject
{
}

+ (unsigned long long)FNV1aForString:(id)arg1;
+ (unsigned long long)FNV1aForData:(id)arg1;
+ (id)sha256Hash:(id)arg1 withSalt:(id)arg2;
+ (id)hexStringFromData:(id)arg1;
+ (id)md5forDictionary:(id)arg1 error:(id *)arg2;
+ (id)md5ForObjectDescription:(id)arg1;
+ (id)md5ForString:(id)arg1;
+ (id)md5ForData:(id)arg1;
+ (id)sha1ForData:(id)arg1;
+ (id)sha1ForString:(id)arg1;

@end

