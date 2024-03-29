//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSCEFormulaOwning-Protocol.h>

@class NSString, TSCECalculationEngine, TSTCellDictionary, TSTTableInfo;

@interface TSTCategoryAggregateFormulaOwner : NSObject <TSCEFormulaOwning>
{
    TSCECalculationEngine *_calcEngine;
    TSTTableInfo *_tableInfo;
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _ownerUID;
    TSTCellDictionary *_cellsPendingWrite;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) const UUIDData_5fbc143e *ownerUID; // @synthesize ownerUID=_ownerUID;
@property(nonatomic) const UUIDData_5fbc143e *tableUID; // @synthesize tableUID=_tableUID;
@property(readonly, nonatomic) TSTCellDictionary *cellsPendingWrite; // @synthesize cellsPendingWrite=_cellsPendingWrite;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (_Bool)isRegisteredWithCalcEngine:(id)arg1;
@property(nonatomic) __weak TSTTableInfo *tableInfo;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

