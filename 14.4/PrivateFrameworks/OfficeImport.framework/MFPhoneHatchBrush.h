//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPhoneHatchBrush : MFPhoneBrush
{
    OITSUColor *m_colour;
    int m_style;
}

+ (id)patternNameForHatchStyle:(int)arg1;
+ (id)hatchBrushWithColour:(id)arg1 in_style:(int)arg2;
- (void).cxx_destruct;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithColour:(id)arg1 in_style:(int)arg2;

@end

