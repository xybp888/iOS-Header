//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsAction.h"

@class MKMapItem;

__attribute__((visibility("hidden")))
@interface ForwardGeocodeAction : MapsAction
{
    MKMapItem *_originalMapItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKMapItem *originalMapItem; // @synthesize originalMapItem=_originalMapItem;
- (void)resolveMapItemWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMapItem:(id)arg1;

@end

