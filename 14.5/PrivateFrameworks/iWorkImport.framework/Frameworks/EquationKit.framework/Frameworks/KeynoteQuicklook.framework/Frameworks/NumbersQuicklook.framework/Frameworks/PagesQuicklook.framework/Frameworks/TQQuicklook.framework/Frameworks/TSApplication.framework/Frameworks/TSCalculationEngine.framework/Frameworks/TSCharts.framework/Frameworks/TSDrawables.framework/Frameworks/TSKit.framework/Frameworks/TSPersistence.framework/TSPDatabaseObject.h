//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TSPDatabaseObject : NSObject
{
    int _classType;
    long long _identifier;
}

+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;
+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;
@property(readonly, nonatomic) int classType; // @synthesize classType=_classType;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSString *fileState;
@property(readonly, nonatomic) _Bool hasFileState;
@property(readonly, nonatomic) long long dataState;
@property(readonly, nonatomic) _Bool hasDataState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2;
- (id)init;

@end

