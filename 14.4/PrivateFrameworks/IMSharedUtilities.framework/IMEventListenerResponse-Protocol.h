//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol IMEventListenerResponse <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic, getter=didSucceed) _Bool success;
@end

