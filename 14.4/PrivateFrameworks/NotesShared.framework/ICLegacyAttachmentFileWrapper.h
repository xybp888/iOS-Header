//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileWrapper.h>

#import <NotesShared/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding>
{
    NSURL *_cidURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *cidURL; // @synthesize cidURL=_cidURL;
@property(readonly, nonatomic) NSString *attachmentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCIDURL:(id)arg1;

@end

