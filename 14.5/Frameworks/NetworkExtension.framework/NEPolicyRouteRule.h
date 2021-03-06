//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSString, NSUUID;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>
{
    NSUUID *_networkAgentUUID;
    long long _action;
    NSString *_interfaceName;
    long long _type;
}

+ (id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2;
+ (id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2;
- (void).cxx_destruct;
@property long long type; // @synthesize type=_type;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property long long action; // @synthesize action=_action;
@property(retain) NSUUID *networkAgentUUID; // @synthesize networkAgentUUID=_networkAgentUUID;
- (_Bool)addTLVsToMessage:(id)arg1;
- (unsigned char)typeValue;
- (id)typeString;
- (unsigned char)actionValue;
- (id)actionString;
- (_Bool)validate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initInternal;
- (id)init;

@end

