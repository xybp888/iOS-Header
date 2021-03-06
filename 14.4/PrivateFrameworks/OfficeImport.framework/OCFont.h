//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OCFontSubfamily;

__attribute__((visibility("hidden")))
@interface OCFont : NSObject
{
    _Bool _bold;
    _Bool _italic;
    OCFontSubfamily *_subfamily;
}

+ (id)fontWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool italic; // @synthesize italic=_italic;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) OCFontSubfamily *subfamily; // @synthesize subfamily=_subfamily;
- (id)initWithSubfamily:(id)arg1 bold:(_Bool)arg2 italic:(_Bool)arg3;

@end

