//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class NSString;

@interface ISHashError : NSObject <NSCopying>
{
    NSString *_actualHashString;
    NSString *_expectedHashString;
    long long _rangeEnd;
    long long _rangeStart;
}

@property(nonatomic) long long rangeStart; // @synthesize rangeStart=_rangeStart;
@property(nonatomic) long long rangeEnd; // @synthesize rangeEnd=_rangeEnd;
@property(copy, nonatomic) NSString *expectedHashString; // @synthesize expectedHashString=_expectedHashString;
@property(copy, nonatomic) NSString *actualHashString; // @synthesize actualHashString=_actualHashString;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *hashFailureHeaderString;
- (void)dealloc;

@end

