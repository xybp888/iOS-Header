//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BLTBulletinStorageSection : NSObject
{
    unsigned long long _totalContextSize;
    unsigned long long _maxContextSize;
    NSMutableArray *_bulletins;
    NSMutableDictionary *_bulletinIDToBulletin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *bulletinIDToBulletin; // @synthesize bulletinIDToBulletin=_bulletinIDToBulletin;
@property(readonly, nonatomic) NSMutableArray *bulletins; // @synthesize bulletins=_bulletins;
@property(readonly, nonatomic) unsigned long long maxContextSize; // @synthesize maxContextSize=_maxContextSize;
@property(readonly, nonatomic) unsigned long long totalContextSize; // @synthesize totalContextSize=_totalContextSize;
- (void)removeBulletin:(id)arg1;
- (id)addOrReplaceBulletin:(id)arg1;
- (id)initWithMaxContextSize:(unsigned long long)arg1;

@end

