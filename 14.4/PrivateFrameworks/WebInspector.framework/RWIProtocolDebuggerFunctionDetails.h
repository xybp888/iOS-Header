//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *scopeChain;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
- (id)initWithLocation:(id)arg1;

@end

