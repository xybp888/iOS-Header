//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    _Bool _keyDown;
    unsigned short _keyCode;
    unsigned short _alternativeKeyCode;
    unsigned int _usagePage;
    unsigned int _modifierState;
    unsigned int _gsModifierState;
    NSString *_unmodifiedInput;
    NSString *_modifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_backupUnmodifiedInput;
    NSString *_backupModifiedInput;
    NSString *_backupShiftModifiedInput;
}

+ (struct __GSKeyboard *)_getUIKitKeyboardRef;
+ (unsigned char)_getIOHIDKeyboardTypeForGSKeyboardType:(unsigned char)arg1;
+ (struct __GSKeyboard *)_getUSUIKitKeyboardRef;
+ (void)prepareForKeycodeTranslation;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned int gsModifierState; // @synthesize gsModifierState=_gsModifierState;
@property(copy, nonatomic) NSString *backupShiftModifiedInput; // @synthesize backupShiftModifiedInput=_backupShiftModifiedInput;
@property(copy, nonatomic) NSString *backupModifiedInput; // @synthesize backupModifiedInput=_backupModifiedInput;
@property(copy, nonatomic) NSString *backupUnmodifiedInput; // @synthesize backupUnmodifiedInput=_backupUnmodifiedInput;
@property(nonatomic) unsigned int modifierState; // @synthesize modifierState=_modifierState;
@property(copy, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;
@property(copy, nonatomic) NSString *modifiedInput; // @synthesize modifiedInput=_modifiedInput;
@property(copy, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(nonatomic) _Bool keyDown; // @synthesize keyDown=_keyDown;
@property(nonatomic) unsigned int usagePage; // @synthesize usagePage=_usagePage;
@property(nonatomic) unsigned short alternativeKeyCode; // @synthesize alternativeKeyCode=_alternativeKeyCode;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)translateKeycode;
- (void)translateStringToKeycode;
- (struct __GSKeyboard *)_getUSUIKitKeyboardRef;
- (struct __GSKeyboard *)_getUIKitKeyboardRef;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

