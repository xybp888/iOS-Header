//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSDate, NSURL;

@protocol PHShare <NSObject>
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) short publishState;
@property(readonly, nonatomic) unsigned short trashedState;
@property(readonly, nonatomic) short publicPermission;
@property(readonly, nonatomic) unsigned short status;
@end

