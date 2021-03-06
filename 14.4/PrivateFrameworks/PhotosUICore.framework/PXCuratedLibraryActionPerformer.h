//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionPerformer.h>

@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer
{
    PXCuratedLibraryViewModel *_viewModel;
    long long _actionZoomLevel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long actionZoomLevel; // @synthesize actionZoomLevel=_actionZoomLevel;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)activitySystemImageName;
- (id)activityType;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

@end

