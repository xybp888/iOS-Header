//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface APSMultiUserFS : NSObject
{
    NSString *_systemPathCache;
    _Bool _isMultiUser;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (id)systemPath;
- (id)initWithIsMultiUserMode:(_Bool)arg1;

@end

