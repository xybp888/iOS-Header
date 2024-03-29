//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSString, TIKeyboardCandidate;

@interface TIKeyboardOutput : NSObject <NSSecureCoding>
{
    _Bool _unmarkIfNecessary;
    _Bool _shouldSendCurrentLocation;
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_textToCommit;
    unsigned long long _deletionCount;
    NSString *_insertionText;
    unsigned long long _forwardDeletionCount;
    NSString *_insertionTextAfterSelection;
    TIKeyboardCandidate *_shortcutConversion;
    NSIndexSet *_handwritingStrokesToDelete;
    NSMutableDictionary *_customInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) _Bool shouldSendCurrentLocation; // @synthesize shouldSendCurrentLocation=_shouldSendCurrentLocation;
@property(copy, nonatomic) NSIndexSet *handwritingStrokesToDelete; // @synthesize handwritingStrokesToDelete=_handwritingStrokesToDelete;
@property(retain, nonatomic) TIKeyboardCandidate *shortcutConversion; // @synthesize shortcutConversion=_shortcutConversion;
@property(copy, nonatomic) NSString *insertionTextAfterSelection; // @synthesize insertionTextAfterSelection=_insertionTextAfterSelection;
@property(nonatomic) unsigned long long forwardDeletionCount; // @synthesize forwardDeletionCount=_forwardDeletionCount;
@property(copy, nonatomic) NSString *insertionText; // @synthesize insertionText=_insertionText;
@property(nonatomic) unsigned long long deletionCount; // @synthesize deletionCount=_deletionCount;
@property(nonatomic) _Bool unmarkIfNecessary; // @synthesize unmarkIfNecessary=_unmarkIfNecessary;
@property(copy, nonatomic) NSString *textToCommit; // @synthesize textToCommit=_textToCommit;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
- (void)deleteForward;
- (void)deleteForward:(unsigned long long)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)deleteBackward;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

