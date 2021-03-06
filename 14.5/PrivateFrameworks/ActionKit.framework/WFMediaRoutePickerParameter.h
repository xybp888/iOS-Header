//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>
#import <ActionKit/WFMediaRoutePickerObserver-Protocol.h>

@class NSString, WFMediaRoutePicker;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver>
{
    WFMediaRoutePicker *_routePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFMediaRoutePicker *routePicker; // @synthesize routePicker=_routePicker;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (void)stopLiveUpdatingPossibleStates;
- (void)startLiveUpdatingPossibleStates;
- (_Bool)liveUpdatesPossibleStatesInEditor;
- (_Bool)hidesAccessoryIconInEditor;
- (id)accessoryIconForPossibleState:(id)arg1;
- (_Bool)parameterStateIsValid:(id)arg1;
- (id)sortedStatesForAvailableRoutes:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (_Bool)shouldDefaultToLocalDeviceEndpoint;
- (_Bool)preferParameterValuePicker;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (void)stopDiscoveringRoutes;
- (void)startDiscoveringRoutes;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) long long routeType;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

