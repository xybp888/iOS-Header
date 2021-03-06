//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : ISOperation
{
    NSString *_bundleID;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (_Bool)_isRestoreRunning;
- (id)_fetchAppProxyForBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id *)arg3;
- (_Bool)_attemptRescueForBundleID:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy, nonatomic) CDUnknownBlockType outputBlock;
- (id)initWithBundleIdentifier:(id)arg1;

@end

