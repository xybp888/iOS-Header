//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager : HFItemManager
{
    HFMediaAccessControlEditorItemModule *_accessControlEditorItemModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HFMediaAccessControlEditorItemModule *accessControlEditorItemModule; // @synthesize accessControlEditorItemModule=_accessControlEditorItemModule;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

