//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPreviewAction.h>

#import <WebKit/WKPreviewActionItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem>
{
    NSString *_identifier;
}

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

