//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ML3AccountCacheEntry : NSObject
{
    NSString *_appleID;
    NSString *_altDSID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;

@end

