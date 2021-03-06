//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

@property(nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)keyAssetCurationOptions;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;

@end

