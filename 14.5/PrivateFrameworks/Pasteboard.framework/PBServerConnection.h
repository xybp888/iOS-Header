//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PBServerConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSXPCConnection *_memberQ_serverConnection;
}

+ (unsigned long long)beginListeningToPasteboardChangeNotifications;
+ (id)defaultConnection;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *memberQ_serverConnection; // @synthesize memberQ_serverConnection=_memberQ_serverConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (unsigned int)transparentSlotWithSize:(struct CGSize)arg1 error:(id *)arg2;
- (unsigned long long)deletePersistentPasteboardWithName:(id)arg1 error:(id *)arg2;
- (unsigned long long)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 error:(id *)arg3;
- (id)localGeneralPasteboardWithAuthenticationBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)localGeneralPasteboard:(id *)arg1;
- (id)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 authenticationBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)pasteboardWithName:(id)arg1 error:(id *)arg2;
- (void)getAllPasteboardsWithAuthenticationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAllPasteboardsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performJanitorialTasksCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didPastePasteboard:(id)arg1;
- (void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestPatternDetectionsFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 patterns:(id)arg5 needValues:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 authenticationMessage:(id)arg3 itemIndex:(unsigned long long)arg4 typeIdentifier:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)localGeneralPasteboardWithAuthenticationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)localGeneralPasteboardCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 authenticationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)pasteboardWithName:(id)arg1 createIfNeeded:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)pasteboardWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSXPCConnection *serverConnection; // @dynamic serverConnection;
- (id)init;

@end

