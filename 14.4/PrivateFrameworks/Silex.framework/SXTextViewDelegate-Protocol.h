//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSSet, NSString, SXComponentTextRules, SXTextView;

@protocol SXTextViewDelegate <NSObject>
- (NSSet *)accessibilityCustomRotorMembershipForTextView:(SXTextView *)arg1;
- (NSString *)accessibilityContextualLabelForTextView:(SXTextView *)arg1;
- (SXComponentTextRules *)textRulesForTextView:(SXTextView *)arg1;
- (NSString *)componentIdentifierForTextView:(SXTextView *)arg1;
@end

