//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@protocol DNDSBackingStoreDelegate, DNDSBackingStoreRecord;

@protocol DNDSBackingStore <NSObject>
@property(nonatomic) __weak id <DNDSBackingStoreDelegate> delegate;
- (unsigned long long)writeRecord:(id <DNDSBackingStoreRecord>)arg1 error:(id *)arg2;
- (id)readRecordWithError:(id *)arg1;
@end

