//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICollectionViewListCell.h>

#import "QuerySuggestionViewProtocol-Protocol.h"

@class NSString, QuerySuggestionView;

__attribute__((visibility("hidden")))
@interface QuerySuggestionCollectionViewCell : _UICollectionViewListCell <QuerySuggestionViewProtocol>
{
    QuerySuggestionView *_querySuggestionView;
}

+ (id)identifier;
+ (double)estimatedCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) QuerySuggestionView *querySuggestionView; // @synthesize querySuggestionView=_querySuggestionView;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1 highlightTitleRanges:(id)arg2 detailText:(id)arg3 style:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

