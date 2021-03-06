//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SearchResultTableViewCell.h"

#import "ChildItemButtonDelegate-Protocol.h"

@class ChildItemsViewModel, MKLocalSearchCompletion, NSArray, NSString, UIImageView, _SearchResultChildItemGridView;
@protocol AcSearchResultTableViewCellDelegate, ChildItemButtonProtocol;

__attribute__((visibility("hidden")))
@interface AcSearchResultTableViewCell : _SearchResultTableViewCell <ChildItemButtonDelegate>
{
    MKLocalSearchCompletion *_completion;
    UIImageView *_imageView;
    int _imageState;
    NSArray<ChildItemButtonProtocol> *_childItemButtons;
    _SearchResultChildItemGridView *_childItemGrid;
    id _object;
    id <AcSearchResultTableViewCellDelegate> _delegate;
    long long _autocompleteCellType;
    long long _autocompleteClientSourceType;
    ChildItemsViewModel *_childItemsViewModel;
    NSArray *_childItems;
}

+ (id)identifierWithChildItemsCount:(unsigned long long)arg1;
+ (double)childItemRowSpacing;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property(retain, nonatomic) ChildItemsViewModel *childItemsViewModel; // @synthesize childItemsViewModel=_childItemsViewModel;
@property(nonatomic) long long autocompleteClientSourceType; // @synthesize autocompleteClientSourceType=_autocompleteClientSourceType;
@property(nonatomic) long long autocompleteCellType; // @synthesize autocompleteCellType=_autocompleteCellType;
@property(nonatomic) __weak id <AcSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (double)paddingAboveContextualInformationStackView;
- (void)didTapChildItemButtonForChildItem:(id)arg1;
- (void)removeTransitLabel;
- (void)addTransitLabel;
- (void)prepareForReuse;
- (_Bool)supportsClientServerDifferentiation;
- (_Bool)wantsTwoLineLayout;
- (id)autocompleteClientSourceString;
- (void)setChildItems:(id)arg1 viewModel:(id)arg2;
- (void)updateChildItems;
- (void)loadPhoto;
- (void)setupPlaceContextContent:(id)arg1;
- (void)setAccessoryViewType:(long long)arg1;
- (void)_updateAccessoryTintColor;
- (void)updateContent;
- (void)updateThirdLineVisibility;
- (void)didUpdatePublisherResult;
- (void)didUpdateMapItem;
- (id)attributedSubtitleString;
- (id)delimiterColor;
- (id)attributedSecondPartDetailString;
- (id)attributedFirstPartDetailString;
- (id)secondaryLabelFont;
- (id)titleFont;
- (id)titleRegularFont;
- (id)attributedTitleString;
- (_Bool)isCompletionTypeAddress;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateChildItemGridAlignmentRectInset;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (long long)containerAlignment;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_highlightedLabelColor;
- (void)_setHighlightedLabelColors;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)trailingMargin;
- (double)labelStackViewSpacing;
- (double)iconSize;
- (double)estimatedChildItemsStackViewWidthWithContentViewWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

