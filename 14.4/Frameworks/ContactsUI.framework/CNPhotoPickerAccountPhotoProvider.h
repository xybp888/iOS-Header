//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNPhotoPickerProvider-Protocol.h>

@class CNVisualIdentity, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider>
{
    _Bool _includeUnifiedContactImages;
    NSString *identifier;
    CNVisualIdentity *_visualIdentity;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool includeUnifiedContactImages; // @synthesize includeUnifiedContactImages=_includeUnifiedContactImages;
@property(readonly, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (id)providerItemForVisualIdentity:(id)arg1 forSize:(struct CGSize)arg2 scale:(double)arg3 RTL:(_Bool)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 itemDelegate:(id)arg7;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithVisualIdentity:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1 includeUnifiedContactImages:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

