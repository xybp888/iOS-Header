//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASCAppOfferStateCenter, ASCArtworkFetcher, ASCLockupFetcher;

__attribute__((visibility("hidden")))
@interface ASCPresenterContext : NSObject
{
    ASCArtworkFetcher *_artworkFetcher;
    ASCLockupFetcher *_lockupFetcher;
    ASCAppOfferStateCenter *_appOfferStateCenter;
}

+ (id)sharedContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter; // @synthesize appOfferStateCenter=_appOfferStateCenter;
@property(readonly, nonatomic) ASCLockupFetcher *lockupFetcher; // @synthesize lockupFetcher=_lockupFetcher;
@property(readonly, nonatomic) ASCArtworkFetcher *artworkFetcher; // @synthesize artworkFetcher=_artworkFetcher;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArtworkFetcher:(id)arg1 lockupFetcher:(id)arg2 appOfferStateCenter:(id)arg3;

@end

