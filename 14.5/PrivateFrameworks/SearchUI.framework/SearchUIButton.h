//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKButton.h>

@interface SearchUIButton : TLKButton
{
    _Bool _useCompactMode;
    unsigned long long _type;
}

@property(nonatomic) _Bool useCompactMode; // @synthesize useCompactMode=_useCompactMode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setFixedSize:(struct CGSize)arg1;
- (void)updateWithType:(unsigned long long)arg1;
- (_Bool)isPlayButton;
- (id)initWithType:(unsigned long long)arg1;

@end

