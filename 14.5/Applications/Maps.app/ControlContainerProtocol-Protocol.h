//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContainerContentInjection-Protocol.h"
#import "ContainerProtocol-Protocol.h"

@protocol FloatingControlsPresentation;

@protocol ControlContainerProtocol <ContainerProtocol, ContainerContentInjection>
@property(readonly, nonatomic) id <FloatingControlsPresentation> floatingControlsPresentationController;
@end

