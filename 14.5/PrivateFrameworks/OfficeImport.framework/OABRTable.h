//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ESDContainer, OABReaderState, OABTableSortedIntArray, OADTable;

__attribute__((visibility("hidden")))
@interface OABRTable : NSObject
{
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    struct CGPoint mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    struct OABTable2DArray<EshShape *> *mHorzLines;
    struct OABTable2DArray<EshShape *> *mVertLines;
    struct OABTable2DArray<OABTableCell> *mCells;
}

- (void).cxx_destruct;
- (void)map;
- (void)createTargetTableContents;
- (id)readStrokeFromShape:(struct EshShape *)arg1;
- (void)validateTable;
- (void)readCellsAndLines;
- (void)readCoordinates;
- (void)mapScale;
- (void)readAnchor;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;

@end

