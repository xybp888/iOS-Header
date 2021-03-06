//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>

@class AMSUIDynamicViewController, NSString;
@protocol AMSUIDynamicViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIDynamicViewControllerDelegateProxy : NSObject <AMSUIDynamicViewControllerDelegate>
{
    id <AMSUIDynamicViewControllerDelegate> _delegate;
    AMSUIDynamicViewController *_dynamicViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AMSUIDynamicViewController *dynamicViewController; // @synthesize dynamicViewController=_dynamicViewController;
@property(nonatomic) __weak id <AMSUIDynamicViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;
- (id)dynamicViewController:(id)arg1 contentViewWithDictionary:(id)arg2 frame:(struct CGRect)arg3;
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;
- (id)initWithDynamicViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

