//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIAlertController, WebUIAlert;

@interface WBUSheetController : NSObject
{
    UIAlertController *_alertController;
    WebUIAlert *_alert;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
}

+ (id)alertControllerForAlert:(id)arg1 automaticallyDismiss:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_alertDidDismissWithAction:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)hideSheet;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)showSheetForAlert:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

