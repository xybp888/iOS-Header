//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKTitleQueryItem : NSObject
{
    NSString *_transcribedTitle;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSString *transcribedTitle; // @synthesize transcribedTitle=_transcribedTitle;
- (id)initWithTranscribedTitle:(id)arg1 bounds:(struct CGRect)arg2;

@end

