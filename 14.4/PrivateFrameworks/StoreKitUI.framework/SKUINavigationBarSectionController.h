//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSString, SKUINavigationBarContext, SKUIViewElementLayoutContext, UIView;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate>
{
    SKUINavigationBarContext *_navigationBarContext;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUINavigationBarContext *context; // @synthesize context=_navigationBarContext;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInNavigationBar;
@property(readonly, nonatomic) SKUIViewElementLayoutContext *viewLayoutContext;
- (id)viewForElementIdentifier:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (void)reloadSectionViews;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

