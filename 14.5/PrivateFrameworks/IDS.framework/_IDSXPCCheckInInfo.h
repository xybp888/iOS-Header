//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDSXPCConnectionProtocol, OS_xpc_object;

@interface _IDSXPCCheckInInfo : NSObject
{
    _Bool _finishedTransaction;
    id <IDSXPCConnectionProtocol> _connection;
    NSObject<OS_xpc_object> *_tempObject;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool finishedTransaction; // @synthesize finishedTransaction=_finishedTransaction;
@property(retain, nonatomic) NSObject<OS_xpc_object> *tempObject; // @synthesize tempObject=_tempObject;
@property(retain, nonatomic) id <IDSXPCConnectionProtocol> connection; // @synthesize connection=_connection;

@end

