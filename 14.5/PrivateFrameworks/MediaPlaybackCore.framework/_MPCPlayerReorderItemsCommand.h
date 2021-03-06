//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerReorderItemsCommand-Protocol.h>

@class NSString;

@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand <MPCPlayerReorderItemsCommand>
{
}

- (id)moveItem:(id)arg1 beforeItem:(id)arg2;
- (id)moveItem:(id)arg1 afterItem:(id)arg2;
- (id)limitedDisplayIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
- (id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
- (_Bool)canMoveItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

