//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVStringPair : NSObject
{
    NSString *_first;
    NSString *_second;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *second; // @synthesize second=_second;
@property(readonly, nonatomic) NSString *first; // @synthesize first=_first;
- (_Bool)keyEquals:(id)arg1;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *key;
- (id)initWithString:(id)arg1 separatedByString:(id)arg2;

@end

