//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@interface SBRequestFolderSnapshotsSwitcherEventResponse : SBSwitcherModifierEventResponse
{
    _Bool _snapshotRequested;
}

@property(nonatomic, getter=isSnapshotRequested) _Bool snapshotRequested; // @synthesize snapshotRequested=_snapshotRequested;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSnapshotRequest:(_Bool)arg1;
- (long long)type;

@end

