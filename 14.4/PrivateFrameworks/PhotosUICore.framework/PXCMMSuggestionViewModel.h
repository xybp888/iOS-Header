//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSString, UIColor, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSuggestionViewModel : PXObservable
{
    _Bool _containsUnverifiedPersons;
    _Bool _highlighted;
    _Bool _selected;
    NSString *_posterTitle;
    NSString *_posterSubtitle;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSArray *_localizedNames;
    NSString *_subtitle;
    UIImage *_combinedFaceTileImage;
    UIColor *_opaqueAncestorBackgroundColor;
}

+ (double)faceTileImageDiameter;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property(readonly, nonatomic) UIImage *combinedFaceTileImage; // @synthesize combinedFaceTileImage=_combinedFaceTileImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, copy, nonatomic) NSString *posterSubtitle; // @synthesize posterSubtitle=_posterSubtitle;
@property(readonly, copy, nonatomic) NSString *posterTitle; // @synthesize posterTitle=_posterTitle;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setCombinedFaceTileImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setContainsUnverifiedPersons:(_Bool)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterSubtitle:(id)arg1;
- (void)setPosterTitle:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

