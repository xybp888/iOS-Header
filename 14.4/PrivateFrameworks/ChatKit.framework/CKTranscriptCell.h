//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell
{
    _Bool _wantsDrawerLayout;
    BOOL _orientation;
    _Bool _shouldConfigureForDarkFSM;
    _Bool _insertingBeforeReplyPreview;
    _Bool _insertingWithReplyPreview;
    _Bool _suppressAnimationsForLineUpdates;
    double _drawerPercentRevealed;
    double _associatedItemOffset;
    long long _insertionType;
    double _insertionDuration;
    double _insertionBeginTime;
}

@property(nonatomic, getter=suppressesAnimationsForLineUpdates) _Bool suppressAnimationsForLineUpdates; // @synthesize suppressAnimationsForLineUpdates=_suppressAnimationsForLineUpdates;
@property(nonatomic) _Bool insertingWithReplyPreview; // @synthesize insertingWithReplyPreview=_insertingWithReplyPreview;
@property(nonatomic) _Bool insertingBeforeReplyPreview; // @synthesize insertingBeforeReplyPreview=_insertingBeforeReplyPreview;
@property(nonatomic) double insertionBeginTime; // @synthesize insertionBeginTime=_insertionBeginTime;
@property(nonatomic) double insertionDuration; // @synthesize insertionDuration=_insertionDuration;
@property(nonatomic) long long insertionType; // @synthesize insertionType=_insertionType;
@property(nonatomic) _Bool shouldConfigureForDarkFSM; // @synthesize shouldConfigureForDarkFSM=_shouldConfigureForDarkFSM;
@property(nonatomic) double associatedItemOffset; // @synthesize associatedItemOffset=_associatedItemOffset;
@property(nonatomic) double drawerPercentRevealed; // @synthesize drawerPercentRevealed=_drawerPercentRevealed;
@property(nonatomic) BOOL orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool wantsDrawerLayout; // @synthesize wantsDrawerLayout=_wantsDrawerLayout;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)performReveal:(CDUnknownBlockType)arg1;
- (void)performHide:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForContents;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;

@end

