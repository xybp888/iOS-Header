//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityPlatformTranslation/NSCopying-Protocol.h>
#import <AccessibilityPlatformTranslation/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isApplicationElement;
    _Bool _didPopuldateAppInfo;
    int _pid;
    unsigned long long _objectID;
    NSString *_bridgeDelegateToken;
    NSData *_rawElementData;
    CDUnknownBlockType _remoteDescriptionBlock;
    NSString *_remoteDebugDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)allowedDecodableClasses;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *remoteDebugDescription; // @synthesize remoteDebugDescription=_remoteDebugDescription;
@property(copy, nonatomic) CDUnknownBlockType remoteDescriptionBlock; // @synthesize remoteDescriptionBlock=_remoteDescriptionBlock;
@property(nonatomic) _Bool didPopuldateAppInfo; // @synthesize didPopuldateAppInfo=_didPopuldateAppInfo;
@property(copy, nonatomic) NSData *rawElementData; // @synthesize rawElementData=_rawElementData;
@property(copy, nonatomic) NSString *bridgeDelegateToken; // @synthesize bridgeDelegateToken=_bridgeDelegateToken;
@property(nonatomic) _Bool isApplicationElement; // @synthesize isApplicationElement=_isApplicationElement;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

