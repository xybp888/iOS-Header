//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialRecurrentTripMemory : PGPotentialMemory
{
    NSArray *_tripNodes;
    NSSet *_locationNodes;
}

- (void).cxx_destruct;
@property(readonly) NSSet *locationNodes; // @synthesize locationNodes=_locationNodes;
@property(readonly) NSArray *tripNodes; // @synthesize tripNodes=_tripNodes;
- (id)initWithTripNodes:(id)arg1 locationNodes:(id)arg2 momentNodes:(id)arg3;

@end

