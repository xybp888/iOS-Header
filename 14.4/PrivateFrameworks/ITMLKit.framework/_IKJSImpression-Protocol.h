//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSImpression-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol _IKJSImpression <IKJSImpression, JSExport>
@property(readonly, nonatomic) NSString *impressionQueueTag;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) id parent;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSArray *timestamps;
@property(readonly, nonatomic) NSString *data;
@end

