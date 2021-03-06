//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSDate, NSString, SUDownloadOptions, SUInstallOptions, SUScanOptions;

@interface SUManagerEngineDownloadDescriptor : NSObject
{
    MAAsset *_asset;
    NSDate *_releaseDate;
    NSString *_sessionID;
    SUScanOptions *_scanOptions;
    SUDownloadOptions *_downloadOptions;
    SUInstallOptions *_installOptions;
    NSString *_installTonightConfig;
    long long _atPhase;
}

+ (id)phaseToString:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long atPhase; // @synthesize atPhase=_atPhase;
@property(retain, nonatomic) NSString *installTonightConfig; // @synthesize installTonightConfig=_installTonightConfig;
@property(retain, nonatomic) SUInstallOptions *installOptions; // @synthesize installOptions=_installOptions;
@property(retain, nonatomic) SUDownloadOptions *downloadOptions; // @synthesize downloadOptions=_downloadOptions;
@property(retain, nonatomic) SUScanOptions *scanOptions; // @synthesize scanOptions=_scanOptions;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) MAAsset *asset; // @synthesize asset=_asset;
- (_Bool)disarmInstall;
- (_Bool)armInstall:(id)arg1;
- (void)resetPhase;
- (id)summary;
- (id)initWithAsset:(id)arg1 releaseDate:(id)arg2 sessionID:(id)arg3 scanOptions:(id)arg4 downloadOptions:(id)arg5 installTonightConfig:(id)arg6 downloadAtPhase:(long long)arg7;

@end

