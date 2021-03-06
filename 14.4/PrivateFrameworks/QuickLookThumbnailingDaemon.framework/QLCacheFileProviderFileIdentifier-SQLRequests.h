//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileProviderFileIdentifier.h>

@interface QLCacheFileProviderFileIdentifier (SQLRequests)
+ (_Bool)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2;
+ (id)whereClauseToFindCacheId;
+ (id)queryStringToFindCacheIds;
+ (unsigned long long)rowIdFromCacheId:(unsigned long long)arg1;
+ (unsigned long long)cacheIdFromRowId:(unsigned long long)arg1;
+ (id)tableName;
- (void)bindInFindCacheIdStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2 startingAtIndex:(unsigned int)arg3 gettingNextIndex:(unsigned int *)arg4;
- (struct sqlite3_stmt *)statementToFindCacheIdInDatabase:(id)arg1;
@end

