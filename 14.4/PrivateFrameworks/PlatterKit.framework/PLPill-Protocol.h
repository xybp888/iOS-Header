//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/NSObject-Protocol.h>

@class NSArray, PLPillContentItem, UIView;

@protocol PLPill <NSObject>
@property(copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property(copy, nonatomic) NSArray *centerContentItems;
@property(readonly, nonatomic) UIView *trailingAccessoryView;
@property(readonly, nonatomic) UIView *leadingAccessoryView;
- (struct CGSize)sizeThatFitsContentItem:(PLPillContentItem *)arg1;
- (void)setCenterContentItems:(NSArray *)arg1 animated:(_Bool)arg2;
@end

