//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MTLSimCommandStoragePool : NSObject
{
    struct StorageEntry *head;
    struct StorageEntry *tail;
    unsigned long long storageSize;
    NSObject<OS_dispatch_semaphore> *semaphore;
}

- (void)returnStorage:(struct StorageEntry *)arg1;
- (struct StorageEntry *)getStorage;
- (struct StorageEntry *)allocStorage;
- (void)dealloc;
- (id)initWithEntrySize:(unsigned long long)arg1;

@end

