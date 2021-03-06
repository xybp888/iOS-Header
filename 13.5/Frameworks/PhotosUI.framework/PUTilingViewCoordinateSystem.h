//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUTilingCoordinateSystem-Protocol.h>

@class NSString, PUTilingView;
@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUTilingViewCoordinateSystem : NSObject <PUTilingCoordinateSystem>
{
    PUTilingView *_tilingView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property(readonly, nonatomic) struct CGPoint coordinateSystemOrigin;
@property(readonly, nonatomic) __weak id <PUTilingCoordinateSystem> parentCoordinateSystem;
- (id)initWithTilingView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

