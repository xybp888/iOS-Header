//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSIndexSet, NSString;

@protocol TFFeedbackFormPresenterView
- (void)showErrorAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(_Bool)arg1;
- (void)reloadEntriesAtIndexPaths:(NSArray *)arg1;
- (void)reloadEntryGroupsAtIndices:(NSIndexSet *)arg1;
- (void)prepareForEntryType:(unsigned long long)arg1;
- (void)setNavigationItemTitle:(NSString *)arg1;
@end

