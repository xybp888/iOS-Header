//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayProtoitem-Protocol.h>

@class NSString, NTPBTodaySectionConfigWebEmbed;

@interface NTTodayWebEmbedProtoitem : NSObject <NTTodayProtoitem>
{
    NSString *_identifier;
    NTPBTodaySectionConfigWebEmbed *_webEmbed;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // @synthesize webEmbed=_webEmbed;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 forLeadingCellAppearance:(_Bool)arg6 preferredDynamicSlotAllocation:(unsigned long long)arg7;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 webEmbed:(id)arg2;
- (id)init;

@end

