//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WFSerializableContentProvider : NSObject
{
    NSMutableDictionary *_entriesForClassNames;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *entriesForClassNames; // @synthesize entriesForClassNames=_entriesForClassNames;
- (void)registerSerializableContentClasses;
- (id)entryConsideringSuperclassesForClass:(Class)arg1;
- (id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2;
- (id)serializedRepresentationForObject:(id)arg1;
- (id)init;

@end

