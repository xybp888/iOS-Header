//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptDetailsResizableCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UISwitch;

__attribute__((visibility("hidden")))
@interface CKDetailsChatOptionsCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell>
{
    UISwitch *_controlSwitch;
}

+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *controlSwitch; // @synthesize controlSwitch=_controlSwitch;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

