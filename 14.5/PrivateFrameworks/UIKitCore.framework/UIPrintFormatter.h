//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying>
{
    _Bool _needsRecalc;
    _Bool _imagePDFAnnotations;
    UIPrintPageRenderer *_printPageRenderer;
    double _maximumContentHeight;
    double _maximumContentWidth;
    long long _startPage;
    long long _pageCount;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _perPageContentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool imagePDFAnnotations; // @synthesize imagePDFAnnotations=_imagePDFAnnotations;
@property(nonatomic) long long startPage; // @synthesize startPage=_startPage;
@property(nonatomic) struct UIEdgeInsets perPageContentInsets; // @synthesize perPageContentInsets=_perPageContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) double maximumContentHeight; // @synthesize maximumContentHeight=_maximumContentHeight;
@property(nonatomic) __weak UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (struct CGRect)_pageContentRect:(_Bool)arg1;
- (long long)_recalcPageCount;
@property(readonly, nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
- (void)_recalcIfNecessary;
- (void)_setNeedsRecalc;
- (void)removeFromPrintPageRenderer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

