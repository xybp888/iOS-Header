//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKPinnedConversationActivityItem-Protocol.h>

@class CKMediaObject, IMMessage, NSString;

@interface CKPinnedConversationMediaObjectActivityItem : NSObject <CKPinnedConversationActivityItem>
{
    double _activityItemContentScale;
    NSString *_attachedContactItemIdentifier;
    IMMessage *_message;
    CKMediaObject *_mediaObject;
}

+ (id)previewImageForMediaObject:(id)arg1;
+ (_Bool)_mediaTypeSupportedForPinningPreview:(int)arg1;
+ (id)previewableMediaObjectFromMessage:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(readonly, nonatomic) IMMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) double activityItemContentScale; // @synthesize activityItemContentScale=_activityItemContentScale;
@property(readonly, nonatomic) NSString *attachedContactItemIdentifier; // @synthesize attachedContactItemIdentifier=_attachedContactItemIdentifier;
- (id)activityItemView;
@property(readonly, nonatomic) _Bool activityItemDisappearsWithAnimation;
@property(readonly, nonatomic) _Bool activityItemAppearsWithAnimation;
@property(readonly, nonatomic) NSString *activityItemIdentifier;
- (id)initWithMessage:(id)arg1 mediaObject:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

