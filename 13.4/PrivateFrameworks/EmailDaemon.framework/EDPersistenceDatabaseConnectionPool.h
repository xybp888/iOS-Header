//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EFResourcePool, NSLock, NSMapTable, NSMutableSet, _EDPersistenceDatabaseConnectionWrapper;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject
{
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    unsigned long long _maxConcurrentBackgroundReaders;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
    id <EDPersistenceDatabaseConnectionPoolDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maxConcurrentBackgroundReaders; // @synthesize maxConcurrentBackgroundReaders=_maxConcurrentBackgroundReaders;
@property(nonatomic) __weak id <EDPersistenceDatabaseConnectionPoolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long writersWaiting;
@property(readonly, nonatomic) unsigned long long backgroundReadersWaiting;
- (unsigned long long)maxConcurrentReaders;
@property(nonatomic) unsigned long long cacheSize;
- (void)flush;
- (void)_unlockForConnectionType:(unsigned long long)arg1 resource:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (_Bool)_lockForConnectionType:(unsigned long long)arg1 resource:(id *)arg2;
- (id)_connectionWithType:(unsigned long long)arg1;
- (id)writerConnection;
- (id)readerConnection;
- (id)backgroundReaderConnection;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (id)init;

@end

