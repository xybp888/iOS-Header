//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PUDisabledUserInteractionToken : NSObject
{
    NSString *_identifier;
    long long _reason;
}

- (void).cxx_destruct;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;

@end

