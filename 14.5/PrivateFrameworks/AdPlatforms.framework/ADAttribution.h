//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADAttribution : NSObject
{
    _Bool _hasCompletedResponse;
    unsigned char _numRetries;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned char numRetries; // @synthesize numRetries=_numRetries;
@property(nonatomic) _Bool hasCompletedResponse; // @synthesize hasCompletedResponse=_hasCompletedResponse;
- (void)setServerToTest:(long long)arg1;
- (void)setStocksAdEnabled:(_Bool)arg1;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)initiateRequestOnConnection:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

