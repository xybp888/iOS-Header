//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PDFThumbnailView, PDFView, _SSSPDFPageMiniMapView;

@interface _SSSPDFThumbnailView : UIView
{
    PDFView *_pdfView;
    _SSSPDFPageMiniMapView *_miniMapView;
    PDFThumbnailView *_thumbnailView;
    struct CGRect _scrollViewVisibleRectInPDFView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) _SSSPDFPageMiniMapView *miniMapView; // @synthesize miniMapView=_miniMapView;
@property(nonatomic) struct CGRect scrollViewVisibleRectInPDFView; // @synthesize scrollViewVisibleRectInPDFView=_scrollViewVisibleRectInPDFView;
@property(retain, nonatomic) PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (void)createMiniMapView;
- (void)createThumbnailView;
- (_Bool)shouldUseMiniMapView;
- (_Bool)shouldShowThumbnailOptionView;
- (_Bool)isShowingThumbnailOptionView;
@property(nonatomic) _Bool shouldUpdate;
- (void)layoutSubviews;

@end

