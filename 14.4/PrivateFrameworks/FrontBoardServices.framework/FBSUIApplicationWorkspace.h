//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspace.h>

@protocol FBSUIApplicationWorkspaceDelegate;

@interface FBSUIApplicationWorkspace : FBSWorkspace
{
}

- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) id <FBSUIApplicationWorkspaceDelegate> delegate;
- (id)initWithSerialQueue:(id)arg1;

@end

