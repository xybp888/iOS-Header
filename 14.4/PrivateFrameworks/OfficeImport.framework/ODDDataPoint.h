//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDDataPoint : ODDPoint
{
    NSMutableArray *mPresentations;
}

- (void).cxx_destruct;
- (void)addAssociatedPresentation:(id)arg1;
- (void)addPresentation:(id)arg1 order:(unsigned long long)arg2;
- (id)presentations;

@end

