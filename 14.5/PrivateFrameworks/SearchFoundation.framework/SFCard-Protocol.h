//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol SFCard <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *entityProtobufMessages;
@property(nonatomic) _Bool flexibleSectionOrder;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) unsigned long long queryId;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier;
@property(nonatomic) int source;
@property(copy, nonatomic) NSURL *urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId;
@property(copy, nonatomic) NSArray *dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData;
@property(copy) NSArray *cardSections;
@property(nonatomic) int type;
@property(copy, nonatomic) NSString *title;
@end

