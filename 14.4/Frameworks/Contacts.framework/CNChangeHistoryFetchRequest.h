//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNFetchRequest.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding>
{
    _Bool _shouldUnifyResults;
    _Bool _mutableObjects;
    _Bool _includeGroupChanges;
    _Bool _enforceClientIdentifier;
    _Bool _includeChangeAnchors;
    _Bool _includeChangeIDs;
    _Bool _includeExternalIDs;
    _Bool _includeImagesChanged;
    _Bool _includeLabeledValueChanges;
    NSData *_startingToken;
    NSArray *_additionalContactKeyDescriptors;
    NSArray *_excludedTransactionAuthors;
    NSString *_clientIdentifier;
    NSString *_containerIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) _Bool includeLabeledValueChanges; // @synthesize includeLabeledValueChanges=_includeLabeledValueChanges;
@property(nonatomic) _Bool includeImagesChanged; // @synthesize includeImagesChanged=_includeImagesChanged;
@property(nonatomic) _Bool includeExternalIDs; // @synthesize includeExternalIDs=_includeExternalIDs;
@property(nonatomic) _Bool includeChangeIDs; // @synthesize includeChangeIDs=_includeChangeIDs;
@property(nonatomic) _Bool includeChangeAnchors; // @synthesize includeChangeAnchors=_includeChangeAnchors;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSArray *excludedTransactionAuthors; // @synthesize excludedTransactionAuthors=_excludedTransactionAuthors;
@property(nonatomic) _Bool includeGroupChanges; // @synthesize includeGroupChanges=_includeGroupChanges;
@property(nonatomic) _Bool mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(nonatomic) _Bool shouldUnifyResults; // @synthesize shouldUnifyResults=_shouldUnifyResults;
@property(copy, nonatomic) NSArray *additionalContactKeyDescriptors; // @synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors;
@property(copy, nonatomic) NSData *startingToken; // @synthesize startingToken=_startingToken;
@property(nonatomic) _Bool unifyResults;
- (void)acceptVisitor:(id)arg1;
- (void)setStartingAnchor:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end

