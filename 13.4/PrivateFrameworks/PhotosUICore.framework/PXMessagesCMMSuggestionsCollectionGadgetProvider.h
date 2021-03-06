//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXCMMSuggestionsDataSourceManager, PXMessagesCMMSuggestionsGadgetProvider, PXNoContentGadget;

@interface PXMessagesCMMSuggestionsCollectionGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver>
{
    PXMessagesCMMSuggestionsGadgetProvider *_suggestionsGadgetProvider;
    PXNoContentGadget *_noContentGadget;
    _Bool _isShowingEmpty;
    _Bool _hasGeneratedGadgets;
    double _contentHeightAdjustment;
}

- (void).cxx_destruct;
@property(nonatomic) double contentHeightAdjustment; // @synthesize contentHeightAdjustment=_contentHeightAdjustment;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateGadgets;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
@property(retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
- (id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

