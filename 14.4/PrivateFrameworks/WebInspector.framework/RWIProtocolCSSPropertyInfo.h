//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool inherited;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSArray *longhands;
@property(copy, nonatomic) NSArray *aliases;
@property(copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1;

@end

