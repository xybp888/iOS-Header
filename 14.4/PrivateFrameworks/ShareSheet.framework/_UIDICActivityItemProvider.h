//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/UIActivityItemProvider.h>

@class UIDocumentInteractionController;

@interface _UIDICActivityItemProvider : UIActivityItemProvider
{
    UIDocumentInteractionController *_documentInteractionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (void)main;
- (id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)item;
- (id)loadedURL;
- (id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2;

@end

