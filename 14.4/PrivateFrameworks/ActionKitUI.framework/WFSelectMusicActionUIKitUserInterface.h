//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/MPMediaPickerControllerDelegate-Protocol.h>
#import <ActionKitUI/WFSelectMusicActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFSelectMusicActionUIKitUserInterface : WFActionUserInterface <MPMediaPickerControllerDelegate, WFSelectMusicActionUserInterface>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)finishWithOutput:(id)arg1 error:(id)arg2;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithSelectMultiple:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

