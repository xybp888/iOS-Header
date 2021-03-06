//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (FPFSHelpers)
+ (id)fp_errorForCollisionWithURL:(id)arg1;
+ (id)fileProviderErrorForNonExistentItemWithIdentifier:(id)arg1;
+ (id)fileProviderErrorForOutOfDateItem:(id)arg1;
+ (id)fileProviderErrorForCollisionWithItem:(id)arg1;
@property(readonly, nonatomic) NSURL *fp_collidingURL;
@end

