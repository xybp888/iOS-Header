//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKOperationMetrics, NSError, NSString;

@protocol CKFetchWebAuthTokenOperationCallbacks <CKOperationCallbacks>
- (void)handleOperationDidCompleteWithWebAuthToken:(NSString *)arg1 metrics:(CKOperationMetrics *)arg2 error:(NSError *)arg3;
@end

