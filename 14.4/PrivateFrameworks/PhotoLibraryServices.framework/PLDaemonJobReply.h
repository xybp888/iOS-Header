//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PLDaemonJobReply : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_xpcReply;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // @synthesize xpcReply=_xpcReply;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReply:(id)arg1;

@end

