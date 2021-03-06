//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/PHPickerViewControllerDelegate-Protocol.h>
#import <ActionKitUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ActionKitUI/WFSelectPhotoActionUserInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFSelectPhotoActionUIKitUserInterface : WFActionUserInterface <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFSelectPhotoActionUserInterface>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWithOutput:(id)arg1 error:(id)arg2;
- (void)showWithPhotoPickerTypes:(id)arg1 selectMultiple:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

