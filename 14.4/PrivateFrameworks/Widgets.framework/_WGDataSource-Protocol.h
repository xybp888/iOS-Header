//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/WGDataSource-Protocol.h>

@class NSString;
@protocol WGDatum;

@protocol _WGDataSource <WGDataSource>
- (void)removeDatumWithIdentifier:(NSString *)arg1;
- (void)replaceWithDatum:(id <WGDatum>)arg1;
@end

