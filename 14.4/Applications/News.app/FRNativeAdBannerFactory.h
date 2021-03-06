//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRAdBannerFactoryProviding-Protocol.h"

@class NSSet, NSString;
@protocol FRFeedAdInventoryDelegate;

@interface FRNativeAdBannerFactory : NSObject <FRAdBannerFactoryProviding>
{
    id <FRFeedAdInventoryDelegate> _adInventoryDelegate;
    NSSet *_context;
    NSString *_uniqueRequestIdentifier;
    NSString *_tileIdentifier;
}

+ (id)nativeRequestWithContext:(id)arg1 tileIdentifier:(id)arg2 requestIdentifier:(id)arg3 adInventoryDelegate:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
@property(copy, nonatomic) NSString *uniqueRequestIdentifier; // @synthesize uniqueRequestIdentifier=_uniqueRequestIdentifier;
@property(retain, nonatomic) NSSet *context; // @synthesize context=_context;
@property(retain, nonatomic) id <FRFeedAdInventoryDelegate> adInventoryDelegate; // @synthesize adInventoryDelegate=_adInventoryDelegate;
- (id)buildBannerViewWithDelegate:(id)arg1 layoutOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

