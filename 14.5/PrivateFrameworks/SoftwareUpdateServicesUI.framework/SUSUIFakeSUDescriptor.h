//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUDescriptor.h>

@interface SUSUIFakeSUDescriptor : SUDescriptor
{
}

- (id)documentation;
- (_Bool)isDownloadableOverCellular;
- (_Bool)isDownloadable;
- (int)updateType;
- (unsigned long long)installationSize;
- (unsigned long long)preparationSize;
- (unsigned long long)downloadSize;
- (id)productBuildVersion;
- (id)productVersion;
- (id)productSystemName;
- (id)humanReadableUpdateName;
- (id)publisher;

@end

