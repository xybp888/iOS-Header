//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSOrderedSet, _UITreeDataSourceSnapshotter;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying>
{
    _UITreeDataSourceSnapshotter *_snapshotter;
    NSOrderedSet *_identifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSOrderedSet *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) _UITreeDataSourceSnapshotter *snapshotter; // @synthesize snapshotter=_snapshotter;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2;
- (id)init;

@end

