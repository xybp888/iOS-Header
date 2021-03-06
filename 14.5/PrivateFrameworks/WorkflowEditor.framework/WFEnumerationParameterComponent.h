//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFParameterComponent.h>

@class WFEnumerationParameter, WFEnumerationSegmentedControlComponent, WFVariableSubstitutableParameterState;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFEnumerationParameterComponent : WFParameterComponent
{
    _Bool _processing;
    WFEnumerationParameter *_parameter;
    CDUnknownBlockType _updateBlock;
    WFVariableSubstitutableParameterState *_state;
    WFEnumerationSegmentedControlComponent *_segmentedControlComponent;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (_Bool)editsMultipleValues;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (unsigned long long)variableResultTypeForParameter:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(readonly, nonatomic) id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(readonly, nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) WFEnumerationSegmentedControlComponent *segmentedControlComponent; // @synthesize segmentedControlComponent=_segmentedControlComponent;
@property(readonly, nonatomic) WFVariableSubstitutableParameterState *state; // @synthesize state=_state;
- (CDUnknownBlockType)updateBlock;
@property(readonly, nonatomic) __weak WFEnumerationParameter *parameter; // @synthesize parameter=_parameter;

@end

