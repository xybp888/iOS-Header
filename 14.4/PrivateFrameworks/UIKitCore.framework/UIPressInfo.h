//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIKey;

@interface UIPressInfo : NSObject
{
    _Bool _longClick;
    unsigned int _contextID;
    double _timestamp;
    long long _phase;
    long long _type;
    unsigned long long _source;
    unsigned long long _gameControllerComponent;
    double _force;
    unsigned long long _clickCount;
    UIKey *_key;
}

+ (id)_keyboardPressInfoForType:(long long)arg1 isKeyDown:(_Bool)arg2 timestamp:(double)arg3 contextID:(unsigned int)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIKey *key; // @synthesize key=_key;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(nonatomic, getter=isLongClick) _Bool longClick; // @synthesize longClick=_longClick;
@property(nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) unsigned long long gameControllerComponent; // @synthesize gameControllerComponent=_gameControllerComponent;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)_sourceDescription;
- (id)description;
- (id)init;

@end

