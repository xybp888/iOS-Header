//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLTitledPlatterView.h>

@protocol WFCompactTitledPlatterViewDelegate;

@interface WFCompactTitledPlatterView : PLTitledPlatterView
{
    id <WFCompactTitledPlatterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WFCompactTitledPlatterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

