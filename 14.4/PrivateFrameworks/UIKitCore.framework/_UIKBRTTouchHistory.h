//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistory : NSObject <NSCopying>
{
    NSMutableArray *_history;
    struct CGPoint _historyOffset;
    double _lastDecayTime;
    _Bool _isLeftHand;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLeftHand; // @synthesize isLeftHand=_isLeftHand;
- (void)_updateOffset;
- (void)reset;
- (void)_decayHistoryToSize:(unsigned long long)arg1;
- (void)_sortHistory;
- (void)decayHistory;
- (void)clearHistory;
- (void)adjustHistoryOffset:(struct CGPoint)arg1;
- (void)removeInfo:(id)arg1;
- (void)addInfo:(id)arg1;
- (_Bool)containsInfo:(id)arg1;
@property(readonly, nonatomic) struct CGPoint historyOffset;
@property(readonly, nonatomic) double lastTime;
@property(readonly, nonatomic) _Bool hasHistory;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsLeftHand:(_Bool)arg1;

@end

