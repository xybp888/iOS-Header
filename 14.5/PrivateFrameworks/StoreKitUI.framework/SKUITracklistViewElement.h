//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSMutableArray, SKUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SKUITracklistViewElement : SKUIViewElement
{
    NSMutableArray *_sections;
    NSMutableArray *_tracks;
}

- (void).cxx_destruct;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) SKUIHeaderViewElement *header;
- (void)enumerateTracksUsingBlock:(CDUnknownBlockType)arg1;

@end

