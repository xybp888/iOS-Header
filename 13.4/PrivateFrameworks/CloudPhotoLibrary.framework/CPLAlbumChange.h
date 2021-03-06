//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLContainerChange.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying>
{
    NSString *_keyAssetIdentifier;
    _Bool _albumSortAscending;
    unsigned long long _albumType;
    NSString *_name;
    long long _position;
    NSString *_parentIdentifier;
    unsigned long long _albumSortType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool albumSortAscending; // @synthesize albumSortAscending=_albumSortAscending;
@property(nonatomic) unsigned long long albumSortType; // @synthesize albumSortType=_albumSortType;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long albumType; // @synthesize albumType=_albumType;
- (id)propertiesDescription;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setParentScopedIdentifier:(id)arg1;
- (id)parentScopedIdentifier;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)scopedIdentifiersForMapping;
- (_Bool)validateRecordForTracker:(id)arg1;

@end

