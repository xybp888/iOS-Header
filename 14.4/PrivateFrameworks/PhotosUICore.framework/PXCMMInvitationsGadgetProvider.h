//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXCMMInvitationGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate>
{
    PXCMMInvitationsDataSource *_dataSource;
    _Bool _didGenerateGadgets;
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXCMMWorkflowPresenting> workflowPresenter; // @synthesize workflowPresenter=_workflowPresenter;
@property(readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)invitationForGadget:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)_newGadgetForObjectID:(id)arg1;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

