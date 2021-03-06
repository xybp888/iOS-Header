//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXProactiveSuggestionClientModel, NSString;

@interface ATXProactiveCardSuggestionClient : NSObject
{
    ATXProactiveSuggestionClientModel *_clientModel;
    NSString *_sourceId;
}

- (void).cxx_destruct;
- (void)retrieveAvailableCriterionIdentifiersWithReply:(CDUnknownBlockType)arg1;
- (id)createSuggestionWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 widgetKind:(id)arg3 criterion:(id)arg4 applicableLayouts:(unsigned long long)arg5 suggestionIdentifier:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 intent:(id)arg9 metadata:(id)arg10;
- (id)createSuggestionWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 criterion:(id)arg3 applicableLayouts:(unsigned long long)arg4 suggestionIdentifier:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 intent:(id)arg8 metadata:(id)arg9;
- (void)retrieveCurrentSuggestionsWithReply:(CDUnknownBlockType)arg1;
- (void)clearSuggestionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearSuggestions;
- (void)updateSuggestions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSuggestions:(id)arg1;
- (id)initWithSourceId:(id)arg1;

@end

