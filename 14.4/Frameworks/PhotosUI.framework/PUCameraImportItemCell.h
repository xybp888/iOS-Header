//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUPhotoView, PXImportItemViewModel, UIActivityIndicatorView, UITextField, UIView;
@protocol PUCameraImportItemCellDelegate;

__attribute__((visibility("hidden")))
@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver>
{
    struct CGRect _badgeTapZone;
    _Bool _needsThumbnailRefresh;
    _Bool _selectable;
    _Bool _needsBadgeUpdate;
    id <PUCameraImportItemCellDelegate> _delegate;
    PXImportItemViewModel *_representedImportItem;
    PUPhotoView *_photoView;
    long long _badgeType;
    UIView *_badgeContainerView;
    UIView *_badgeView;
    UIActivityIndicatorView *_spinner;
    UITextField *_debugTextField;
    long long _thumbnailRequestID;
    struct CGRect _scaledDisplayRect;
}

+ (double)alphaForSelectedCells;
- (void).cxx_destruct;
@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(nonatomic) struct CGRect scaledDisplayRect; // @synthesize scaledDisplayRect=_scaledDisplayRect;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(retain, nonatomic) UITextField *debugTextField; // @synthesize debugTextField=_debugTextField;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) PUPhotoView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) _Bool needsThumbnailRefresh; // @synthesize needsThumbnailRefresh=_needsThumbnailRefresh;
@property(retain, nonatomic) PXImportItemViewModel *representedImportItem; // @synthesize representedImportItem=_representedImportItem;
@property(nonatomic) __weak id <PUCameraImportItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateDebugLabel:(id)arg1;
- (id)accessibilityCustomActions;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (long long)dragState;
- (void)_selectAction;
- (void)_enterOneUpAction;
- (void)handleTapGesture:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (struct CGRect)_filledPhotosRectForImage:(id)arg1;
- (void)clearImage;
- (void)cancelThumbnailLoadIfActive;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize)arg2 fillMode:(long long)arg3 videoDuration:(double)arg4 isPlaceholder:(_Bool)arg5;
- (void)setCachedImage:(id)arg1 isPlaceholder:(_Bool)arg2;
- (void)_fetchThumbnailReady;
- (void)refreshThumbnail;
- (void)updateBadgeUIIfNeeded;
- (void)prepareForReuse;
- (void)showActivityBadge:(_Bool)arg1;
- (_Bool)shouldBeginGestureForPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

