//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAFloatMatrix.h>

@class _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper;

@interface MAMutableFloatMatrix : MAFloatMatrix
{
}

+ (Class)wrapperClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendRow:(id)arg1;
- (void)addScalar:(float)arg1;
- (void)subtractScalar:(float)arg1;
- (void)subtractMatrix:(id)arg1;
- (void)setFloat:(float)arg1 atRow:(long long)arg2 column:(long long)arg3;

// Remaining properties
@property(readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatMatrixWrapper *wrapper; // @dynamic wrapper;

@end

