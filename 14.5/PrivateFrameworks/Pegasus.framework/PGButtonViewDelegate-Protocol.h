//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/NSObject-Protocol.h>

@class PGButtonView;

@protocol PGButtonViewDelegate <NSObject>
- (struct UIEdgeInsets)buttonView:(PGButtonView *)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)buttonView:(PGButtonView *)arg1 titleRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;
- (struct CGRect)buttonView:(PGButtonView *)arg1 imageRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;
- (void)buttonViewDidReceiveTouchUpInside:(PGButtonView *)arg1;
@end

