//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>

@class PUSlideshowViewModel, PUSlideshowViewModelChange;

@protocol PUSlideshowViewModelChangeObserver <PUViewModelChangeObserver>

@optional
- (void)viewModel:(PUSlideshowViewModel *)arg1 didChange:(PUSlideshowViewModelChange *)arg2;
@end

