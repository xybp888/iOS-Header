//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUserInterfaceElementEventTracker.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDetailsAssetsWidgetEventTracker-Protocol.h>

@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver>
{
    _Bool _isDisplayingCuratedContent;
    NSString *_visibleState;
    long long _visibleStateSignpost;
}

- (void).cxx_destruct;
@property(nonatomic) long long visibleStateSignpost; // @synthesize visibleStateSignpost=_visibleStateSignpost;
@property(retain, nonatomic) NSString *visibleState; // @synthesize visibleState=_visibleState;
@property(nonatomic) _Bool isDisplayingCuratedContent; // @synthesize isDisplayingCuratedContent=_isDisplayingCuratedContent;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_logDidEndViewingState:(id)arg1;
- (void)_logDidStartViewingState:(id)arg1;
- (void)_updateVisibleState;
- (void)_invalidateVisibleState;
- (void)logContentViewDidDisappear;
- (void)logContentViewWillAppear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

