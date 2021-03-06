//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUNewUserEducationFlowLayoutModel, UIColor;

@interface HUNewUserEducationCollectionViewModel : NSObject
{
    _Bool _showsVerticalScrollIndicator;
    _Bool _showsHorizontalScrollIndicator;
    UIColor *_backgroundColor;
    double _decelerationRate;
    HUNewUserEducationFlowLayoutModel *_layoutModel;
    long long _numberOfItemsInSection;
    long long _numberOfSections;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(readonly, nonatomic) _Bool showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(readonly, nonatomic) long long numberOfItemsInSection; // @synthesize numberOfItemsInSection=_numberOfItemsInSection;
@property(readonly, nonatomic) HUNewUserEducationFlowLayoutModel *layoutModel; // @synthesize layoutModel=_layoutModel;
@property(readonly, nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)init;

@end

