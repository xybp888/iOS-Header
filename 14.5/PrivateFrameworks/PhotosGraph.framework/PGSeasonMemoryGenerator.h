//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGSeasonMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
    unsigned long long _type;
}

+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (_Bool)isMoment:(id)arg1 duringSeason:(id)arg2;
+ (id)seasonNodeForMomentNode:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)keyAssetCurationOptions;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithController:(id)arg1;
- (id)_seasonInHistoryPotentialMemories;
- (id)_lastSeasonPotentialMemory;
- (id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(unsigned long long)arg3;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

