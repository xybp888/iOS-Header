//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, STSSearchBrowserHeaderView;

@interface STSSearchBrowserRootView : UIView
{
    NSMutableArray *_constraints;
    STSSearchBrowserHeaderView *_headerView;
    double _headerTopInset;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double headerTopInset; // @synthesize headerTopInset=_headerTopInset;
@property(retain, nonatomic) STSSearchBrowserHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

