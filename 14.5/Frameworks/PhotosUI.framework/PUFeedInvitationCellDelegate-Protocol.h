//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCellDelegate-Protocol.h>

@class PUFeedInvitationCell, UIViewController;

@protocol PUFeedInvitationCellDelegate <PUFeedCellDelegate>

@optional
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 presentViewController:(UIViewController *)arg2;
- (void)feedInvitationCellReportAsJunk:(PUFeedInvitationCell *)arg1;
- (void)feedInvitationCell:(PUFeedInvitationCell *)arg1 didAccept:(_Bool)arg2;
@end

