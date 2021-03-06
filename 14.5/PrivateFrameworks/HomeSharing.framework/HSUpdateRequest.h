//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest
{
    long long _connectionType;
}

+ (id)requestWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;
- (double)timeoutInterval;
- (_Bool)isConcurrent;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;

@end

