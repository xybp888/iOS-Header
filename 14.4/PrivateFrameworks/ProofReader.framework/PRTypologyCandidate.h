//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRTypologyCandidate : NSObject
{
    NSString *_candidateString;
    struct _NSRange _selectedRange;
    NSTextCheckingResult *_result;
    double _openTime;
    double _closeTime;
    _Bool _isOpen;
}

+ (id)openTypologyCandidate:(id)arg1 selectedRange:(struct _NSRange)arg2 inString:(id)arg3;
- (void)closeTypologyCandidateWithResult:(id)arg1;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2;

@end

