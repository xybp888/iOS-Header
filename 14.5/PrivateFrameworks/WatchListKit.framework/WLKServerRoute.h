//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WLKServerRoute : NSObject
{
    _Bool _requiresLocation;
    NSString *_routeName;
    NSString *_host;
    NSString *_path;
    NSString *_requiredKVPType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requiresLocation; // @synthesize requiresLocation=_requiresLocation;
@property(readonly, nonatomic) NSString *requiredKVPType; // @synthesize requiredKVPType=_requiredKVPType;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithDictionary:(id)arg1 routeName:(id)arg2;

@end

