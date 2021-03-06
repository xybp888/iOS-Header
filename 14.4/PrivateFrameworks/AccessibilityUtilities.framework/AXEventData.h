//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXEventData : NSObject
{
    struct _AXEventDataStorage _storage;
}

+ (id)dataWithBytes:(char *)arg1 length:(long long)arg2;
+ (id)dataWithSender:(long long)arg1;
@property(readonly, nonatomic) long long dataLength;
@property(readonly, nonatomic) char *dataBytes;
@property(readonly, nonatomic) _Bool wasPostedByAccessibility;
@property(readonly, nonatomic) long long eventSenderIdentifier;
- (id)description;
- (id)init;

@end

