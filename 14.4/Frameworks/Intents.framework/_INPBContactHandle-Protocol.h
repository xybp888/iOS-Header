//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBContactHandle <NSObject>
@property(readonly, nonatomic) _Bool hasValue;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(nonatomic) _Bool hasSuggested;
@property(nonatomic) _Bool suggested;
@property(readonly, nonatomic) _Bool hasLabel;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) _Bool hasEmergencyType;
@property(nonatomic) int emergencyType;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
- (int)StringAsEmergencyType:(NSString *)arg1;
- (NSString *)emergencyTypeAsString:(int)arg1;
@end

