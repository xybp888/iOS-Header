//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>
#import <SearchUI/WKNavigationDelegate-Protocol.h>
#import <SearchUI/WKScriptMessageHandler-Protocol.h>

@class NSString, NUIContainerBoxView, WKWebView;

@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    double _contentHeight;
    WKWebView *_webView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (id)replaceSemanticColor:(id)arg1 withColor:(id)arg2 inString:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NUIContainerBoxView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

