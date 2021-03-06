//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSTCellWillChangeProtocol-Protocol.h>
#import <TSTables/TSTMergeChangeProtocol-Protocol.h>

@class NSArray, NSMutableArray, TSCECalculationEngine, TSTTableInfo, TSTTableModel;

@interface TSTCategoryOwner : NSObject <TSTCellWillChangeProtocol, TSTMergeChangeProtocol>
{
    TSTTableInfo *_tableInfo;
    TSCECalculationEngine *_calcEngine;
    struct TSKUIDStruct _baseTableUID;
    struct TSKUIDStruct _ownerUID;
    NSMutableArray *_groupBys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *groupBys; // @synthesize groupBys=_groupBys;
@property(nonatomic) struct TSKUIDStruct ownerUID; // @synthesize ownerUID=_ownerUID;
@property(nonatomic) struct TSKUIDStruct baseTableUID; // @synthesize baseTableUID=_baseTableUID;
- (void)didAddRows:(const TSKUIDStructVectorTemplate_724280d5 *)arg1;
- (void)willRemoveRows:(const TSKUIDStructVectorTemplate_724280d5 *)arg1 tableUID:(const struct TSKUIDStruct *)arg2;
- (void)didUnmergeRange:(struct TSUModelCellRect)arg1;
- (void)didMergeRange:(struct TSUModelCellRect)arg1;
- (void)willApplyConcurrentCellMap:(id)arg1 tableUID:(const struct TSKUIDStruct *)arg2;
- (void)willApplyBaseCellMap:(id)arg1 tableUID:(const struct TSKUIDStruct *)arg2;
- (void)willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const struct TSKUIDStruct *)arg3;
- (struct TSKUIDStruct)p_willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 refreshCategoryInfo:(_Bool)arg3;
- (void)remapTableUIDsInFormulasWithMap:(const struct TSKUIDStructMap *)arg1 calcEngine:(id)arg2;
- (void)saveToArchive:(struct CategoryOwnerArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CategoryOwnerArchive *)arg1 unarchiver:(id)arg2 forBaseTableUID:(const struct TSKUIDStruct *)arg3;
- (void)updateWithDocumentRoot:(id)arg1;
- (id)categoryInfos;
- (void)unregisterGroupBy:(id)arg1;
- (id)registerGroupByForColumns:(id)arg1;
- (id)groupByByUid:(const struct TSKUIDStruct *)arg1;
- (void)registerGroupBy:(id)arg1;
- (id)calcEngine;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const struct TSKUIDStruct *)arg2;
- (void)teardown;
@property(readonly, nonatomic) TSTTableModel *tableModel;
@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void)unregisterFromDistributors;
- (void)registerWithDistributors;
- (id)description;
- (_Bool)hasEnabledGroupBys;
- (void)dealloc;
- (id)initWithBaseTableUID:(const struct TSKUIDStruct *)arg1;
- (id)initWithBaseTableUID:(const struct TSKUIDStruct *)arg1 ownerUID:(const struct TSKUIDStruct *)arg2;

@end

