//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLInjecting-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface _CPLObjectInjection : NSObject <PQLInjecting>
{
    NSMutableArray *_bindValuesToKeepAlive;
    NSArray *_variables;
    id _object;
    NSData *_sql;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSArray *variables; // @synthesize variables=_variables;
- (id)bindValuesToKeepAlive;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithVariables:(id)arg1 object:(id)arg2 sql:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

