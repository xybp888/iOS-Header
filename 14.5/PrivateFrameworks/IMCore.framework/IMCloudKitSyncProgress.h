//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMCloudKitSyncState, IMCloudKitSyncStatistics, NSArray, NSString;

@interface IMCloudKitSyncProgress : NSObject
{
    _Bool _shouldShowProgressBar;
    _Bool _shouldShowIndeterminateProgress;
    _Bool _shouldShowUserActionLabel;
    _Bool _shouldShowUserMessageLabel;
    NSString *_progressLabel;
    double _progressBarValue;
    double _progressBarMax;
    NSString *_userMessageLabel;
    NSString *_actionLabel;
    long long _actionType;
    IMCloudKitSyncState *_syncState;
    IMCloudKitSyncStatistics *_syncStatistics;
    double _broadcastDeferralOverride;
}

- (void).cxx_destruct;
@property(nonatomic) double broadcastDeferralOverride; // @synthesize broadcastDeferralOverride=_broadcastDeferralOverride;
@property(readonly, nonatomic) IMCloudKitSyncStatistics *syncStatistics; // @synthesize syncStatistics=_syncStatistics;
@property(readonly, nonatomic) IMCloudKitSyncState *syncState; // @synthesize syncState=_syncState;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) NSString *userMessageLabel; // @synthesize userMessageLabel=_userMessageLabel;
@property(nonatomic) _Bool shouldShowUserMessageLabel; // @synthesize shouldShowUserMessageLabel=_shouldShowUserMessageLabel;
@property(nonatomic) _Bool shouldShowUserActionLabel; // @synthesize shouldShowUserActionLabel=_shouldShowUserActionLabel;
@property(nonatomic) double progressBarMax; // @synthesize progressBarMax=_progressBarMax;
@property(nonatomic) double progressBarValue; // @synthesize progressBarValue=_progressBarValue;
@property(nonatomic) _Bool shouldShowIndeterminateProgress; // @synthesize shouldShowIndeterminateProgress=_shouldShowIndeterminateProgress;
@property(nonatomic) _Bool shouldShowProgressBar; // @synthesize shouldShowProgressBar=_shouldShowProgressBar;
@property(retain, nonatomic) NSString *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @dynamic hidden;
@property(readonly, nonatomic) NSArray *errors; // @dynamic errors;
@property(readonly, nonatomic) double remainingItems; // @dynamic remainingItems;
@property(readonly, nonatomic) double percentComplete; // @dynamic percentComplete;
- (id)description;
- (void)configureSelf;
@property(readonly, nonatomic) NSString *percentCompleteString; // @dynamic percentCompleteString;
- (id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2;
- (id)init;

@end

