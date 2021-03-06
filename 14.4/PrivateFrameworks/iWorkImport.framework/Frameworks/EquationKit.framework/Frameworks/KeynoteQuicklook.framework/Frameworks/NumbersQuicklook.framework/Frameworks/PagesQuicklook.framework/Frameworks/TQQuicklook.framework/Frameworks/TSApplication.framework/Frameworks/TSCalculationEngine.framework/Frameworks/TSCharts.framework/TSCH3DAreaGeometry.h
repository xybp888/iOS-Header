//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DGeometry.h>

@interface TSCH3DAreaGeometry : TSCH3DGeometry
{
    vector_7200ab52 mTopLine;
    vector_7200ab52 mBottomLine;
    float mMinZ;
    float mMaxZ;
    float mZeroValue;
    unsigned int mCapOffset;
    int mCapCount;
    _Bool mStacked;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool stacked; // @synthesize stacked=mStacked;
@property(nonatomic) float zeroValue; // @synthesize zeroValue=mZeroValue;
@property(nonatomic) float maxZ; // @synthesize maxZ=mMaxZ;
@property(nonatomic) float minZ; // @synthesize minZ=mMinZ;
- (id)elementsBoundsPositions;
- (id)selectionKnobPositions;
- (void)generateArrays;
- (tvec2_84d5962d)bottomTopAtPosition:(float)arg1;
- (unsigned int)capCount;
- (unsigned int)capOffset;
- (int)geometryCount;
- (const vector_7200ab52 *)bottomLine;
- (const vector_7200ab52 *)topLine;
- (void)setTopLine:(const vector_7200ab52 *)arg1 bottomLine:(const vector_7200ab52 *)arg2 zeroValue:(float)arg3;
- (id)init;

@end

