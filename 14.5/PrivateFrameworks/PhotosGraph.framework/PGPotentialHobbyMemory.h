//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphPersonNode;

@interface PGPotentialHobbyMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    NSArray *_hobbyAssetLocalIdentifiers;
    PGGraphPersonNode *_personNode;
    long long _year;
    long long _hobbyType;
}

- (void).cxx_destruct;
@property(readonly) long long hobbyType; // @synthesize hobbyType=_hobbyType;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
@property(retain) NSArray *hobbyAssetLocalIdentifiers; // @synthesize hobbyAssetLocalIdentifiers=_hobbyAssetLocalIdentifiers;
- (void)addMomentNode:(id)arg1;
- (id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3;

@end

