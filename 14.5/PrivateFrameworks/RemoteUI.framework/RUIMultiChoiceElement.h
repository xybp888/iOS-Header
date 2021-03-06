//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUIMultiChoiceActionHandler-Protocol.h>

@class NSString, RUIMultiChoiceView, RUIObjectModel;

@interface RUIMultiChoiceElement : RUIElement <RUIMultiChoiceActionHandler>
{
    RUIMultiChoiceView *_view;
    RUIObjectModel *_objectModel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) RUIMultiChoiceView *view; // @synthesize view=_view;
- (void)didTapChoice:(id)arg1;
- (void)stopActivityIndicatorForChoice:(id)arg1;
- (void)startActivityIndicatorForChoice:(id)arg1;
- (double)estimatedViewHeight;
- (id)viewForElementIdentifier:(id)arg1;
- (void)addChoice:(id)arg1;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

