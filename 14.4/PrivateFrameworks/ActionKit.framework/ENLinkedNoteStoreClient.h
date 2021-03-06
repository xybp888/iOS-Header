//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/ENNoteStoreClient.h>

@class ENLinkedNotebookRef;
@protocol ENLinkedNoteStoreClientDelegate;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient
{
    id <ENLinkedNoteStoreClientDelegate> _delegate;
    ENLinkedNotebookRef *_linkedNotebookRef;
}

+ (id)noteStoreClientForLinkedNotebookRef:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ENLinkedNotebookRef *linkedNotebookRef; // @synthesize linkedNotebookRef=_linkedNotebookRef;
@property(nonatomic) __weak id <ENLinkedNoteStoreClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)noteStoreUrl;
- (id)authenticationToken;

@end

