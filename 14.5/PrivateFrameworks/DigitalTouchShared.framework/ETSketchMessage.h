//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class NSArray, NSMutableArray;

@interface ETSketchMessage : ETMessage
{
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
    _Bool _hasMultipleColors;
    _Bool _didEndWisping;
    _Bool _didDrawPoints;
    _Bool _hideComet;
}

+ (unsigned short)messageType;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideComet; // @synthesize hideComet=_hideComet;
@property(nonatomic) _Bool didDrawPoints; // @synthesize didDrawPoints=_didDrawPoints;
@property(nonatomic) _Bool didEndWisping; // @synthesize didEndWisping=_didEndWisping;
@property(nonatomic) _Bool hasMultipleColors; // @synthesize hasMultipleColors=_hasMultipleColors;
- (double)messageDuration;
- (void)convertToSimulatedPlaybackSpeed;
- (void)setParentMessage:(id)arg1;
- (void)didEndWisp;
- (void)willBeginWisp;
- (id)messageTypeAsString;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;
- (_Bool)_decodeWithDoodle:(id)arg1;
- (void)addSketchPoint:(struct CGPoint)arg1;
- (void)addSketchPoint:(struct CGPoint)arg1 atTime:(double)arg2;
- (void)addStrokeWithColor:(id)arg1;
- (void)didReachRendererLimit;
@property(readonly, nonatomic) unsigned long long numberOfColors;
@property(readonly, nonatomic) NSArray *colorsInMessage;
@property(readonly, nonatomic) NSArray *strokes;
- (id)init;

@end

