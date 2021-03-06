//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/NSCopying-Protocol.h>

@class NSString;

@interface WFSlotIdentifier : NSObject <NSCopying>
{
    NSString *_key;
    NSString *_parameterKey;
    long long _arrayIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long arrayIndex; // @synthesize arrayIndex=_arrayIndex;
@property(readonly, nonatomic) NSString *parameterKey; // @synthesize parameterKey=_parameterKey;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifierBySettingArrayIndex:(long long)arg1;
- (id)identifierBySettingParameterKey:(id)arg1;
- (id)identifierBySettingParameterKey:(id)arg1 arrayIndex:(long long)arg2;
- (id)initWithKey:(id)arg1 parameterKey:(id)arg2 arrayIndex:(long long)arg3;
- (id)initWithKey:(id)arg1;

@end

