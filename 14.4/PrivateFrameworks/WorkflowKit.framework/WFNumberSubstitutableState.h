//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class NSNumber;

@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState
{
}

+ (id)serializedRepresentationFromNumber:(id)arg1;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
@property(readonly, nonatomic) NSNumber *number;
- (id)initWithNumber:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;

@end

