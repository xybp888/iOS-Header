//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItemChangeTransaction.h>

@class CNMutableContact, NSArray;

__attribute__((visibility("hidden")))
@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction
{
    CNMutableContact *_mutableContact;
    NSArray *_groupChangeRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *groupChangeRequest; // @synthesize groupChangeRequest=_groupChangeRequest;
@property(readonly, nonatomic) CNMutableContact *mutableContact; // @synthesize mutableContact=_mutableContact;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1 isNew:(_Bool)arg2;
- (id)initWithContentItem:(id)arg1;

@end

