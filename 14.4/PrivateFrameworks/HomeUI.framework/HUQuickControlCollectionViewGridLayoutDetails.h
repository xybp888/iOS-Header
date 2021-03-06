//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUQuickControlCollectionGridLayoutSettings, HUQuickControlCollectionViewGridLayoutRowInfo, NSArray;

@interface HUQuickControlCollectionViewGridLayoutDetails : NSObject
{
    HUQuickControlCollectionGridLayoutSettings *_settings;
    unsigned long long _sectionIndex;
    HUQuickControlCollectionViewGridLayoutRowInfo *_sectionHeaderLayout;
    NSArray *_rowLayouts;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *rowLayouts; // @synthesize rowLayouts=_rowLayouts;
@property(retain, nonatomic) HUQuickControlCollectionViewGridLayoutRowInfo *sectionHeaderLayout; // @synthesize sectionHeaderLayout=_sectionHeaderLayout;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(retain, nonatomic) HUQuickControlCollectionGridLayoutSettings *settings; // @synthesize settings=_settings;
- (unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1;
- (id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)indexPathForSectionHeader;

@end

