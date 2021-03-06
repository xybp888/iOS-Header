//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMMutableContentItem-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class EMMailDropMetadata, EMObjectID, NSArray, NSString;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding>
{
    _Bool _isAvailableLocally;
    _Bool _isSinglePagePDF;
    int _exchangeEventUID;
    NSArray *_availableRepresentations;
    NSString *_contentID;
    long long _dataTransferByteCount;
    NSString *_displayName;
    CDUnknownBlockType _loaderBlock;
    long long _storageByteCount;
    NSString *_UTType;
    EMMailDropMetadata *_mailDropMetadata;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int exchangeEventUID; // @synthesize exchangeEventUID=_exchangeEventUID;
@property(copy, nonatomic) EMMailDropMetadata *mailDropMetadata; // @synthesize mailDropMetadata=_mailDropMetadata;
@property(nonatomic) _Bool isSinglePagePDF; // @synthesize isSinglePagePDF=_isSinglePagePDF;
@property(copy, nonatomic) NSString *UTType; // @synthesize UTType=_UTType;
@property(nonatomic) long long storageByteCount; // @synthesize storageByteCount=_storageByteCount;
@property(copy, nonatomic) CDUnknownBlockType loaderBlock; // @synthesize loaderBlock=_loaderBlock;
@property(nonatomic) _Bool isAvailableLocally; // @synthesize isAvailableLocally=_isAvailableLocally;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long dataTransferByteCount; // @synthesize dataTransferByteCount=_dataTransferByteCount;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(copy, nonatomic) NSArray *availableRepresentations; // @synthesize availableRepresentations=_availableRepresentations;
- (_Bool)_isSinglePagePDFWithContentURL:(id)arg1;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) EMObjectID *objectID;
@property(readonly) Class superclass;

@end

