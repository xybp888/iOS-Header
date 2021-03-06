//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlayUI/CAMLParserDelegate-Protocol.h>

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate>
{
    CALayer *_animatedGlyphLayer;
    CAStateController *_stateController;
    NSMutableArray *_barLayers;
    CALayer *_platterLayer;
    _Bool _highlighted;
    unsigned int _playbackState;
    NSString *_stateName;
}

+ (id)classSubstitions;
- (void).cxx_destruct;
@property(nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *stateName; // @synthesize stateName=_stateName;
- (void)traitCollectionDidChange:(id)arg1;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_updateColors;
- (void)layoutSubviews;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (id)initWithCAML:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

