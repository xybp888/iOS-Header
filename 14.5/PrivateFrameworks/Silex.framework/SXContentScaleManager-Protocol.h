//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXContentScaleManagerDelegate;

@protocol SXContentScaleManager <NSObject>
@property(nonatomic) __weak id <SXContentScaleManagerDelegate> delegate;
@property(readonly, nonatomic) double contentScaleFactor;
@property(readonly, nonatomic) long long contentScale;
- (void)reset;
- (void)decrease;
- (void)increase;
@end

