//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKPlaceActionManagerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GEOCollectionPublisherAttribution, NSString, UIButton, UIMenu;
@protocol PublisherAnalytics, PublisherHeaderActionDelegate;

__attribute__((visibility("hidden")))
@interface PublisherHeaderViewActionManager : NSObject <UIGestureRecognizerDelegate, MKPlaceActionManagerProtocol>
{
    _Bool _shouldHideApp;
    GEOCollectionPublisherAttribution *_attribution;
    id <PublisherHeaderActionDelegate> _actionDelegate;
    id <PublisherAnalytics> _analyticsManager;
    UIMenu *_publisherMenu;
    UIButton *_ellipsis;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *ellipsis; // @synthesize ellipsis=_ellipsis;
@property(retain, nonatomic) UIMenu *publisherMenu; // @synthesize publisherMenu=_publisherMenu;
@property(nonatomic) _Bool shouldHideApp; // @synthesize shouldHideApp=_shouldHideApp;
@property(retain, nonatomic) id <PublisherAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(nonatomic) __weak id <PublisherHeaderActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) GEOCollectionPublisherAttribution *attribution; // @synthesize attribution=_attribution;
- (void)didTapShareButton:(id)arg1;
- (void)didTapWebsiteButton;
- (void)didTapAppButton;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)headerEllipsis;
- (id)createRowActionsWithStyle:(unsigned long long)arg1;
- (id)menuForPublisher;
- (id)initWithAttribution:(id)arg1 withActionsDelegate:(id)arg2 usingAnalyticsManager:(id)arg3 shouldHideAppIcon:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

