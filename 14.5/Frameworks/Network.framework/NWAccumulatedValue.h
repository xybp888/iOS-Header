//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NWAccumulation;

__attribute__((visibility("hidden")))
@interface NWAccumulatedValue : NSObject
{
    NSObject *_object;
    NSString *_keyPath;
    NWAccumulation *_accumulation;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NWAccumulation *accumulation; // @synthesize accumulation=_accumulation;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (id)snapshot;
- (id)description;

@end

