//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionRepresentationView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionCustomViewRepresentationView : UIInterfaceActionRepresentationView
{
    UIView *_actionContentView;
}

- (void).cxx_destruct;
- (void)_removeLoadedContentsFromViewHierarcy;
- (void)_insertLoadedContentsIntoHierarchy;
- (id)_actionContentView;
- (void)updateContentsInsertedIntoHierarchy;
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;
- (id)_fittingContentSizingView;
- (void)setHighlighted:(_Bool)arg1;
- (id)description;
- (id)initWithAction:(id)arg1;

@end

