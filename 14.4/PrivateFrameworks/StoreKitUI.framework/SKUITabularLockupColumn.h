//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUITabularLockupColumn : NSObject
{
    NSMutableArray *_childViewElements;
    long long _identifier;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *childViewElements; // @synthesize childViewElements=_childViewElements;
- (id)description;
- (void)_addChildViewElement:(id)arg1;
- (id)initWithColumnIdentifier:(long long)arg1;

@end

