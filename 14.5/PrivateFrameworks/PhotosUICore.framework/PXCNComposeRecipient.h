//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRecipient.h>

@class CNComposeRecipient;

@interface PXCNComposeRecipient : PXRecipient
{
    CNComposeRecipient *_recipient;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;
- (id)description;
- (id)initWithRecipient:(id)arg1;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;

@end

