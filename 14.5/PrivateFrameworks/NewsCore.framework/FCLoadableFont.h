//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying>
{
    NSString *_fontName;
    NSURL *_fontURL;
}

+ (id)loadableFontWithName:(id)arg1 url:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *fontURL; // @synthesize fontURL=_fontURL;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

