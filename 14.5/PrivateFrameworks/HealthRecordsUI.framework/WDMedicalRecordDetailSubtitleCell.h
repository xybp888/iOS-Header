//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDetailSubtitleCell : WDMedicalRecordGroupableCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (double)_subtitleLabelLastBaselineToBottom;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (id)_subtitleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (id)_titleLabelFont;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;

@end

