//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSDictionary, NSError, NSURL, PHVideoChoosingAndAvailabilityRequest;

@protocol PHVideoChoosingAndAvailabilityRequestDelegate <NSObject>
- (void)videoChoosingAndAvailabilityRequest:(PHVideoChoosingAndAvailabilityRequest *)arg1 didFinishWithVideoURL:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)videoChoosingAndAvailabilityRequest:(PHVideoChoosingAndAvailabilityRequest *)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(NSError *)arg4;
@end

