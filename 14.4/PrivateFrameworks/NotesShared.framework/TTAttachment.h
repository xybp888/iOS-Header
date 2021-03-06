//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTAttachment-Protocol.h>

@class NSString;

@interface TTAttachment : NSObject <TTAttachment>
{
    NSString *_attachmentIdentifier;
    NSString *_attachmentUTI;
}

+ (_Bool)isAttachment:(id)arg1 equalToModelComparable:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attachmentUTI; // @synthesize attachmentUTI=_attachmentUTI;
@property(retain, nonatomic) NSString *attachmentIdentifier; // @synthesize attachmentIdentifier=_attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (_Bool)isEqualToModelComparable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

