//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSArray, NSString;

@interface TMLValueExpression : NSObject <TMLModelSerialize>
{
    NSString *_expressionText;
    NSArray *_bindings;
}

+ (id)decode:(const struct ProtobufCMessage *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *bindings; // @synthesize bindings=_bindings;
@property(readonly, nonatomic) NSString *expressionText; // @synthesize expressionText=_expressionText;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExpressionText:(id)arg1 bindings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

