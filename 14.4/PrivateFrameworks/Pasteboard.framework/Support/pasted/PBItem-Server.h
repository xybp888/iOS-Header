//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pasteboard/PBItem.h>

@interface PBItem (Server)
- (void)saveRepresentationsToStorageBaseURL:(id)arg1 fileProtectionType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_saveRepresentationsToBaseURL:(id)arg1 types:(id)arg2 fileProtectionType:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setStorageBaseURL:(id)arg1;
- (id)persistentFileNameForType:(id)arg1;
@end

