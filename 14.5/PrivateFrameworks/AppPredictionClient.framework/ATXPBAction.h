//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class ATXPBAVRouteInfo, ATXPBActionCriteria, NSData, NSMutableArray, NSString;

@interface ATXPBAction : PBCodable <NSCopying>
{
    long long _actionType;
    long long _userActivityHash;
    NSString *_activityString;
    NSString *_bundleId;
    NSData *_contentAttributeSet;
    ATXPBActionCriteria *_criteria;
    NSString *_heuristic;
    NSMutableArray *_heuristicMetadatas;
    NSData *_intent;
    NSString *_itemIdentifier;
    NSString *_languageCode;
    ATXPBAVRouteInfo *_routeInfo;
    NSString *_subtitle;
    NSString *_title;
    NSData *_userActivityProxy;
    NSString *_uuid;
    _Bool _isFutureMedia;
    struct {
        unsigned int actionType:1;
        unsigned int userActivityHash:1;
        unsigned int isFutureMedia:1;
    } _has;
}

+ (Class)heuristicMetadataType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *heuristicMetadatas; // @synthesize heuristicMetadatas=_heuristicMetadatas;
@property(retain, nonatomic) ATXPBAVRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property(retain, nonatomic) ATXPBActionCriteria *criteria; // @synthesize criteria=_criteria;
@property(retain, nonatomic) NSData *contentAttributeSet; // @synthesize contentAttributeSet=_contentAttributeSet;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSData *userActivityProxy; // @synthesize userActivityProxy=_userActivityProxy;
@property(retain, nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
@property(nonatomic) long long userActivityHash; // @synthesize userActivityHash=_userActivityHash;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isFutureMedia; // @synthesize isFutureMedia=_isFutureMedia;
@property(retain, nonatomic) NSString *heuristic; // @synthesize heuristic=_heuristic;
@property(retain, nonatomic) NSData *intent; // @synthesize intent=_intent;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)heuristicMetadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)heuristicMetadatasCount;
- (void)addHeuristicMetadata:(id)arg1;
- (void)clearHeuristicMetadatas;
@property(readonly, nonatomic) _Bool hasRouteInfo;
@property(readonly, nonatomic) _Bool hasCriteria;
@property(readonly, nonatomic) _Bool hasContentAttributeSet;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasItemIdentifier;
@property(readonly, nonatomic) _Bool hasUserActivityProxy;
@property(readonly, nonatomic) _Bool hasActivityString;
@property(nonatomic) _Bool hasUserActivityHash;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasIsFutureMedia;
@property(readonly, nonatomic) _Bool hasHeuristic;
@property(readonly, nonatomic) _Bool hasIntent;
@property(nonatomic) _Bool hasActionType;
@property(readonly, nonatomic) _Bool hasBundleId;

@end

