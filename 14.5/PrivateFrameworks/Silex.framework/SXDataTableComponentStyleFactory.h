//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableStyleFactory-Protocol.h>

@class NSString, SXDataRecordStore, SXDataTableSelectorValidator, SXDataTableStyle, SXJSONObjectMerger;

@interface SXDataTableComponentStyleFactory : NSObject <SXDataTableStyleFactory>
{
    SXDataRecordStore *_recordStore;
    SXDataTableStyle *_tableStyle;
    unsigned long long _dataOrientation;
    SXDataTableSelectorValidator *_selectorValidator;
    SXJSONObjectMerger *_rowStyleMerger;
    SXJSONObjectMerger *_columnStyleMerger;
    SXJSONObjectMerger *_cellStyleMerger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SXJSONObjectMerger *cellStyleMerger; // @synthesize cellStyleMerger=_cellStyleMerger;
@property(readonly, nonatomic) SXJSONObjectMerger *columnStyleMerger; // @synthesize columnStyleMerger=_columnStyleMerger;
@property(readonly, nonatomic) SXJSONObjectMerger *rowStyleMerger; // @synthesize rowStyleMerger=_rowStyleMerger;
@property(readonly, nonatomic) SXDataTableSelectorValidator *selectorValidator; // @synthesize selectorValidator=_selectorValidator;
@property(readonly, nonatomic) unsigned long long dataOrientation; // @synthesize dataOrientation=_dataOrientation;
@property(readonly, nonatomic) SXDataTableStyle *tableStyle; // @synthesize tableStyle=_tableStyle;
@property(readonly, nonatomic) SXDataRecordStore *recordStore; // @synthesize recordStore=_recordStore;
- (id)descriptorForIdentifier:(id)arg1;
- (long long)compareSelector:(id)arg1 withOtherSelector:(id)arg2;
- (id)sortStylesMatchesBySelectorWeight:(id)arg1;
- (id)filterDuplicateSequentialStyles:(id)arg1;
- (id)styleByMergingStyleMatches:(id)arg1 forBaseStyle:(id)arg2 merger:(id)arg3;
- (unsigned long long)isEvenNumber:(long long)arg1;
- (unsigned long long)isOddNumber:(long long)arg1;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1 usingBaseStyle:(id)arg2;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)rowStyleForRowIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;
- (id)rowStyleForRowIndex:(unsigned long long)arg1;
- (id)headerCellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (id)headerColumnStyleForColumnIndex:(unsigned long long)arg1;
- (id)headerRowStyleForRowIndex:(unsigned long long)arg1;
- (id)dataTableStyle;
- (id)initWithRecordStore:(id)arg1 tableStyle:(id)arg2 dataOrientation:(unsigned long long)arg3 rowStyleMerger:(id)arg4 columnStyleMerger:(id)arg5 cellStyleMerger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

