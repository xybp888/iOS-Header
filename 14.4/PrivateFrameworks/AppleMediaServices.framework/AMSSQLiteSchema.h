//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchema : NSObject
{
    AMSSQLiteConnection *_connection;
}

- (void).cxx_destruct;
- (void)_setUserVersion:(long long)arg1;
- (_Bool)tableExists:(id)arg1;
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly) long long currentUserVersion;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end

