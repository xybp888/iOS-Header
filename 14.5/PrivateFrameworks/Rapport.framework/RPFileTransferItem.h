//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface RPFileTransferItem : NSObject
{
    _Bool _completed;
    long long _fileSize;
    CDUnknownBlockType _completionHandler;
    NSString *_filename;
    NSURL *_itemURL;
    NSDictionary *_metadata;
    NSData *_sha256HashData;
    NSError *_error;
    unsigned long long _estimatedSize;
    NSData *_fileData;
    unsigned long long _fileID;
    unsigned long long _metadataSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long metadataSize; // @synthesize metadataSize=_metadataSize;
@property(nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) unsigned long long estimatedSize; // @synthesize estimatedSize=_estimatedSize;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSData *sha256HashData; // @synthesize sha256HashData=_sha256HashData;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (id)init;

@end

