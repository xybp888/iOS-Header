//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKEmergencyCardTableItem, UIView;

@protocol HKEmergencyCardRowHeightChangeDelegate
- (void)tableItemDidChangeSelection:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect)arg2 inView:(UIView *)arg3;
- (void)tableItemDidBeginEditing:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect)arg2 inView:(UIView *)arg3;
- (void)tableItem:(HKEmergencyCardTableItem *)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(UIView *)arg4;
@end

