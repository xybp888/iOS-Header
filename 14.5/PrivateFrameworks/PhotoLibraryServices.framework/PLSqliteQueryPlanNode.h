//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLSqliteQueryPlanNode : NSObject
{
    int _identifier;
    int _parentIdentifier;
    int _unused;
    NSString *_nodeDescription;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *nodeDescription; // @synthesize nodeDescription=_nodeDescription;
@property(readonly) int unused; // @synthesize unused=_unused;
@property(readonly) int parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly) int identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4;

@end

