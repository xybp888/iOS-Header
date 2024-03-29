//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCTagRanking-Protocol.h"

@class NSString;
@protocol FCTagRanking;

@interface FRSubscribedTagRanker : NSObject <FCTagRanking>
{
    id <FCTagRanking> _tagRanker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCTagRanking> tagRanker; // @synthesize tagRanker=_tagRanker;
- (id)scoresForTagIDs:(id)arg1;
- (id)rankTagIDsDescending:(id)arg1;
- (id)initWithTagRanker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

