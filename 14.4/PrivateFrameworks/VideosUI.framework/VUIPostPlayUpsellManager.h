//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TVPMediaItem;

@interface VUIPostPlayUpsellManager : NSObject
{
    NSObject<TVPMediaItem> *_deferredMediaItem;
    double _deferredElapsedTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) double deferredElapsedTime; // @synthesize deferredElapsedTime=_deferredElapsedTime;
@property(retain, nonatomic) NSObject<TVPMediaItem> *deferredMediaItem; // @synthesize deferredMediaItem=_deferredMediaItem;
- (void)handleRouterDataSourceIfNeeded:(id)arg1;
- (void)_reset;
- (void)_handleUpsellForMediaItem:(id)arg1 elapsedTimeInterval:(double)arg2;
- (void)_handleDeferredMediaItemUpsellIfNeeded;
- (void)_currentMediaItemWillChange:(id)arg1;
- (_Bool)_isFullScreenPlaybackUIShown;
- (id)init;

@end

