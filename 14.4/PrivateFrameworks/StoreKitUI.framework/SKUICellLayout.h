//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject
{
    UIView *_cell;
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    _Bool _parentWantsCellNeedsLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIView *parentCellView; // @synthesize parentCellView=_cell;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)setSelected:(_Bool)arg1;
- (void)setNeedsLayout;
- (void)setHighlighted:(_Bool)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)resetLayout;
- (void)layoutSubviews;
- (id)initWithTableViewCell:(id)arg1;
- (id)initWithParentView:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

