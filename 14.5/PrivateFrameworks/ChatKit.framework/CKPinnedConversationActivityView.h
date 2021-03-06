//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKPinnedConversationActivityItemViewDelegate-Protocol.h>

@class CAShapeLayer, CKPinnedConversationActivitySnapshot, NSArray, NSMutableArray, NSString;

@interface CKPinnedConversationActivityView : UIView <CKPinnedConversationActivityItemViewDelegate>
{
    _Bool _suppressingActivity;
    _Bool _showContentAlignmentDebugFrames;
    long long _activityItemOriginationDirection;
    NSMutableArray *_activityItemViews;
    NSMutableArray *_contactItemViews;
    CKPinnedConversationActivitySnapshot *_latestSnapshot;
    CAShapeLayer *_innerContentAlignmentDebugLayer;
    CAShapeLayer *_outerContentAlignmentDebugLayer;
    CAShapeLayer *_activityItemAttachmentCircleDebugLayer;
    CAShapeLayer *_originationPointDebugLayer;
    struct CGPoint _activityItemOriginationPoint;
    struct CGRect _avatarFrame;
    struct CGRect _innerContentAlignmentFrame;
    struct CGRect _outerContentAlignmentFrame;
    struct CGRect _activityItemOriginationSubAvatarFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *originationPointDebugLayer; // @synthesize originationPointDebugLayer=_originationPointDebugLayer;
@property(retain, nonatomic) CAShapeLayer *activityItemAttachmentCircleDebugLayer; // @synthesize activityItemAttachmentCircleDebugLayer=_activityItemAttachmentCircleDebugLayer;
@property(retain, nonatomic) CAShapeLayer *outerContentAlignmentDebugLayer; // @synthesize outerContentAlignmentDebugLayer=_outerContentAlignmentDebugLayer;
@property(retain, nonatomic) CAShapeLayer *innerContentAlignmentDebugLayer; // @synthesize innerContentAlignmentDebugLayer=_innerContentAlignmentDebugLayer;
@property(retain, nonatomic) CKPinnedConversationActivitySnapshot *latestSnapshot; // @synthesize latestSnapshot=_latestSnapshot;
@property(retain, nonatomic) NSMutableArray *contactItemViews; // @synthesize contactItemViews=_contactItemViews;
@property(retain, nonatomic) NSMutableArray *activityItemViews; // @synthesize activityItemViews=_activityItemViews;
@property(nonatomic) _Bool showContentAlignmentDebugFrames; // @synthesize showContentAlignmentDebugFrames=_showContentAlignmentDebugFrames;
@property(nonatomic, getter=isSuppressingActivity) _Bool suppressingActivity; // @synthesize suppressingActivity=_suppressingActivity;
@property(nonatomic) struct CGRect activityItemOriginationSubAvatarFrame; // @synthesize activityItemOriginationSubAvatarFrame=_activityItemOriginationSubAvatarFrame;
@property(nonatomic) struct CGPoint activityItemOriginationPoint; // @synthesize activityItemOriginationPoint=_activityItemOriginationPoint;
@property(nonatomic) long long activityItemOriginationDirection; // @synthesize activityItemOriginationDirection=_activityItemOriginationDirection;
@property(nonatomic) struct CGRect outerContentAlignmentFrame; // @synthesize outerContentAlignmentFrame=_outerContentAlignmentFrame;
@property(nonatomic) struct CGRect innerContentAlignmentFrame; // @synthesize innerContentAlignmentFrame=_innerContentAlignmentFrame;
@property(nonatomic) struct CGRect avatarFrame; // @synthesize avatarFrame=_avatarFrame;
- (void)activityItemViewNeedsResize:(id)arg1;
- (_Bool)haveAttachedContactItemViewsForActivityViews:(id)arg1;
- (void)setSuppressingActivity:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetToEmptySnapshot;
@property(readonly, nonatomic) NSArray *displayedContacts;
- (double)contactItemViewDiameterForAvatarFrame:(struct CGRect)arg1;
- (double)activityItemAttachmentCircleRadiusInsetForAvatarFrame:(struct CGRect)arg1;
- (double)contactItemViewCenterXCoordinateForYCoordinate:(double)arg1 avatarFrame:(struct CGRect)arg2 contentAlignment:(long long)arg3;
- (double)tailAttachmentXCoordinateForYCoordinate:(double)arg1 avatarFrame:(struct CGRect)arg2 contentAlignment:(long long)arg3;
- (double)circleXCoordinateForYCoordinate:(double)arg1 radius:(double)arg2 centerPoint:(struct CGPoint)arg3 contentAlignment:(long long)arg4;
- (struct CGPoint)pointAlongCircle:(struct CGRect)arg1 atArcLength:(double)arg2 fromPoint:(struct CGPoint)arg3 clockwise:(_Bool)arg4;
- (_Bool)nextContactItemIsClockwiseForOriginationDirection:(long long)arg1 contactItemAlignment:(long long)arg2;
- (long long)activityViewContentAlignmentForContactItemAlignment:(long long)arg1;
- (void)_layoutUnattachedContactItemViews:(id)arg1 withContentScale:(id)arg2 applyingTransform:(_Bool)arg3;
- (struct CGPoint)_convertPointInOwnCoordinateSpace:(struct CGPoint)arg1 toUnscaledCoordinateSpaceOfSubview:(id)arg2;
- (void)_layoutViewsAssociatedWithActivityItemViews:(id)arg1 excludingContactItemViews:(id)arg2 withContentScale:(id)arg3 applyingTransform:(_Bool)arg4 updatingActivityItemViews:(_Bool)arg5 updatingAttachedContactItemViews:(_Bool)arg6;
- (void)_updateSnapshotAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applySnapshot:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contactItemViewMatchingContactItemIdentifier:(id)arg1 fromContactItemViews:(id)arg2;
- (id)_activityItemViewWithActivityItemIdentifier:(id)arg1;
- (id)_presentedActivityItems;
- (id)_unattachedContactItemViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

