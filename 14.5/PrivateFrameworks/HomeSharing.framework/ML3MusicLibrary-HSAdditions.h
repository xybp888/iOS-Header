//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (HSAdditions)
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4;
+ (void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)executeUpdateSQL:(id)arg1;
- (void)_performImport:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

