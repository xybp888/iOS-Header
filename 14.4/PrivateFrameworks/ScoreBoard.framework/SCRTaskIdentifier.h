//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScoreBoard/NSCopying-Protocol.h>

@class NSString;

@interface SCRTaskIdentifier : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_name;
}

+ (id)identifierWithName:(id)arg1;
+ (id)identifier;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_initWithName:(id)arg1;
- (id)init;

@end

