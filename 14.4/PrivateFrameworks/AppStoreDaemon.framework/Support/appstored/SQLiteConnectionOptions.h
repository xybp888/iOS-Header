//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SQLiteConnectionOptions : NSObject <NSCopying>
{
    _Bool _readOnly;
    long long _cacheSize;
    NSString *_databasePath;
    NSString *_encryptionKeyId;
    NSString *_protectionType;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSString *protectionType; // @synthesize protectionType=_protectionType;
@property(copy, nonatomic) NSString *encryptionKeyId; // @synthesize encryptionKeyId=_encryptionKeyId;
@property(readonly) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (int)_encryptDatabase:(struct sqlite3 *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;
- (int)applyToDatabase:(struct sqlite3 *)arg1;
- (id)initWithDatabasePath:(id)arg1;

@end

