//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechAssetServices/AXUIClientDelegate-Protocol.h>

@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate>
{
    _Bool _inSession;
    CDUnknownBlockType _resultCallback;
}

- (void).cxx_destruct;
- (void)cancelPronunciationSession;
- (void)stopPronunciationSession;
- (void)startPronunciationSession:(id)arg1 resultCallback:(CDUnknownBlockType)arg2;
- (float)audioLevel;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)supportsPronunciationSessions;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)_assetUpdaterClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

