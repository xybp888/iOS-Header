//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/NSObject-Protocol.h>

@class BRProgressProxy, NSProgress, NSString;

@protocol BRProgressProxyDelegate <NSObject>

@optional
- (NSString *)progressProxy:(BRProgressProxy *)arg1 localizedDescriptionForProgress:(NSProgress *)arg2;
- (_Bool)progressProxy:(BRProgressProxy *)arg1 shouldProxyProgress:(NSProgress *)arg2;
@end

