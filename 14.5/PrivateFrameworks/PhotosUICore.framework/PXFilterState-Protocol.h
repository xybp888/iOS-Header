//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSPredicate, NSString;

@protocol PXFilterState <NSCopying>
@property(readonly, nonatomic) NSString *localizedFooterDescription;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) _Bool isFiltering;
- (NSPredicate *)predicateForUseCase:(unsigned long long)arg1;
@end

