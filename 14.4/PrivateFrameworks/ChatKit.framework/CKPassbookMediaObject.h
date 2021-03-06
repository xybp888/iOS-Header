//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject
{
    PKPass *_pass;
    UIImage *_icon;
}

+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (_Bool)isPreviewable;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (int)mediaType;
- (id)passView;
- (id)previewItemTitle;
- (_Bool)shouldShowDisclosure;
- (_Bool)shouldBeQuickLooked;
- (_Bool)shouldShowViewer;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)subtitle;
- (id)title;
- (Class)balloonViewClassForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)attachmentSummary:(unsigned long long)arg1;
- (id)metricsCollectorMediaType;
- (_Bool)_supportsPassbook;
- (id)initWithTransfer:(id)arg1 isFromMe:(_Bool)arg2 suppressPreview:(_Bool)arg3 forceInlinePreview:(_Bool)arg4;

@end

