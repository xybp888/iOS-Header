//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSObservanceDelegate-Protocol.h>

@class NSArray, NSDictionary, NSExpression, NSString;

@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate>
{
    _Bool _monitoringForChanges;
    _Bool _hasDeterminedValue;
    NSDictionary *_substitutionVariables;
    NSExpression *_expression;
    id _object;
    id _value;
    NSArray *_observers;
}

+ (_Bool)automaticallyNotifiesObserversOfValue;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasDeterminedValue; // @synthesize hasDeterminedValue=_hasDeterminedValue;
@property(copy, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isMonitoringForChanges) _Bool monitoringForChanges; // @synthesize monitoringForChanges=_monitoringForChanges;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSExpression *expression; // @synthesize expression=_expression;
- (void)observeChange:(id)arg1 forObservance:(id)arg2;
@property(copy, nonatomic) NSDictionary *substitutionVariables; // @synthesize substitutionVariables=_substitutionVariables;
- (void)_updateComputedResultIfNeeded;
- (void)_updateComputedResult:(id)arg1;
- (void)_stopMonitoringForChanges;
- (void)_startMonitoringForChanges;
- (id)_observersForPredicate:(id)arg1;
- (id)_observersForExpression:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

