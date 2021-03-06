//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLAccountFlags, CPLEngineScope, CPLLibraryInfo, CPLLibraryState, CPLScopedIdentifier, CPLShare, NSDate, NSString;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    _Bool _activated;
    long long _scopeType;
    CPLShare *_share;
    CPLLibraryState *_libraryState;
    CPLLibraryInfo *_libraryInfo;
    unsigned long long _pullTaskItem;
    CPLEngineScope *_scope;
}

+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeInferClassWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (_Bool)shouldAutoActivateScopeWithType:(long long)arg1;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (_Bool)cplShouldIgnorePropertyForEquality:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(nonatomic) unsigned long long pullTaskItem; // @synthesize pullTaskItem=_pullTaskItem;
@property(retain, nonatomic) CPLLibraryInfo *libraryInfo; // @synthesize libraryInfo=_libraryInfo;
@property(retain, nonatomic) CPLLibraryState *libraryState; // @synthesize libraryState=_libraryState;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(retain, nonatomic) CPLShare *share; // @synthesize share=_share;
@property(nonatomic) long long scopeType; // @synthesize scopeType=_scopeType;
- (void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(_Bool *)arg3;
- (long long)defaultFlags;
- (id)redactedDescription;
- (id)description;
@property(readonly, nonatomic) CPLAccountFlags *accountFlags;
@property(readonly, nonatomic) NSDate *deleteDate;
@property(readonly, nonatomic) NSDate *disabledDate;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
- (id)assetCountPerType;
- (id)scopeIdentifier;
- (id)_scopedIdentifier;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (void)_setChangeType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *recordModificationDate; // @dynamic recordModificationDate;
@property(copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @dynamic scopedIdentifier;

@end

