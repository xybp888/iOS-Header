//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>
#import <MediaControls/UIPointerInteractionDelegate-Protocol.h>

@class MRUNowPlayingHeaderView, MRUVisualStylingProvider, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MRUViewServiceEndpointTableViewCell : UITableViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>
{
    MRUNowPlayingHeaderView *_headerView;
    UIView *_separatorView;
    MRUVisualStylingProvider *_stylingProvider;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)updateVisualStyling;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

