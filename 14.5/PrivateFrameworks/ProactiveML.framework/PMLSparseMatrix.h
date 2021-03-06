//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMLSparseMatrix : NSObject
{
    _Bool _isSymmetric;
    struct sparse_m_float *_matrix;
}

+ (id)sparseMatrixFromNumbers:(id)arg1;
+ (id)sparseMatrixWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2;
@property(nonatomic) struct sparse_m_float *matrix; // @synthesize matrix=_matrix;
@property(nonatomic) _Bool isSymmetric; // @synthesize isSymmetric=_isSymmetric;
- (float)maxValue;
- (float)minValue;
- (id)matrixWithConstantColumn;
- (void)enumerateNonZeroValuesForRow:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSparseRowsWithBlock:(CDUnknownBlockType)arg1;
- (float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (id)initWithSparseMatrix:(struct sparse_m_float *)arg1;
- (id)init;

@end

