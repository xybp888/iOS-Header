//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSection.h>

@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection
{
    PHFetchResult *_fetchResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (long long)count;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithFetchResult:(id)arg1;

@end

