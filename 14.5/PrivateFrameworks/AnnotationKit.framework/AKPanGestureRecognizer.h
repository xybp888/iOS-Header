//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import <AnnotationKit/AKPenDetectionGestureRecognizerProtocol-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>
{
    _Bool _penGestureDetected;
    double _currentWeight;
    double _currentMaxWeight;
    NSMutableArray *_currentAccumulatedTouches;
    NSMutableSet *_additionalTouches;
    struct CGPoint _locationOfFirstTouch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *additionalTouches; // @synthesize additionalTouches=_additionalTouches;
@property(retain, nonatomic) NSMutableArray *currentAccumulatedTouches; // @synthesize currentAccumulatedTouches=_currentAccumulatedTouches;
@property(nonatomic) _Bool penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
@property(nonatomic) double currentMaxWeight; // @synthesize currentMaxWeight=_currentMaxWeight;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
@property(readonly, nonatomic) unsigned long long additionalNumberOfTouches;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetAdditionalTouches;
- (void)resetAccumulatedTouches;
- (id)accumulatedTouches;
- (void)_checkTouchForStylus:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

