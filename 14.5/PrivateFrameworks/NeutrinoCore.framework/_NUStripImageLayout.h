//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageLayout.h>

@interface _NUStripImageLayout : NUImageLayout
{
    long long _stripHeight;
    long long _stripCount;
}

- (_Bool)isEqualToLayout:(id)arg1;
- (CDStruct_912cb5d2)tileCounts;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileSize;
- (id)tileInfoAtIndex:(long long)arg1;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (long long)tileCount;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 stripHeight:(long long)arg2;

@end

