//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolCommandResponse_Command;

@interface RMProtocolCommandResponse : RMModelPayloadBase
{
    NSString *_responseCommandToken;
    RMProtocolCommandResponse_Command *_responseCommand;
}

+ (id)requestWithCommandToken:(id)arg1 command:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) RMProtocolCommandResponse_Command *responseCommand; // @synthesize responseCommand=_responseCommand;
@property(copy, nonatomic) NSString *responseCommandToken; // @synthesize responseCommandToken=_responseCommandToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

