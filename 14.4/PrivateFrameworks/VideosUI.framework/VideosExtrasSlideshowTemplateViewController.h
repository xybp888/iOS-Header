//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasTemplateViewController.h>

#import <VideosUI/VideosExtrasSlideshowViewControllerDataSource-Protocol.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class IKSlideshowElement, NSArray, NSString, UITapGestureRecognizer, VideosExtrasSlideshowViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant>
{
    _Bool _overlayHidden;
    _Bool _preventNavbarAutohide;
    VideosExtrasSlideshowViewController *_slideshowViewController;
    NSArray *_imageElements;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *imageElements; // @synthesize imageElements=_imageElements;
@property(retain, nonatomic) VideosExtrasSlideshowViewController *slideshowViewController; // @synthesize slideshowViewController=_slideshowViewController;
- (void)_toggleVisibilityOfNavigationBar;
- (void)_firstImageLoadedHideNavigationBar;
- (void)_handleTap:(id)arg1;
- (_Bool)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1;
- (_Bool)showsPlaceholder;
@property(readonly, nonatomic) IKSlideshowElement *templateElement;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

