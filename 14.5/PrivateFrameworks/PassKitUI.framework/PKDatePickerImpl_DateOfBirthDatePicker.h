//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDatePickerImpl_DatePicker.h>

#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>

@class NSDate, NSString;

@interface PKDatePickerImpl_DateOfBirthDatePicker : PKDatePickerImpl_DatePicker <PKDatePickerInternalImplementationProtocol>
{
}

- (id)initShowingDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3 useDarkAppearance:(_Bool)arg4 locale:(id)arg5 calendar:(id)arg6;

// Remaining properties
@property(retain, nonatomic) NSDate *date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

