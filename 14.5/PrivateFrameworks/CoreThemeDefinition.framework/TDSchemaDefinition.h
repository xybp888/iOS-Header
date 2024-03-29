//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, TDSchemaCategory;

@interface TDSchemaDefinition : NSManagedObject
{
}

+ (const CDStruct_22c2ae3f *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;
+ (const CDStruct_22c2ae3f *)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2;
+ (unsigned long long)elementDefinitionCountWithSchema:(id)arg1;
- (id)displayName;
- (id)previewImage;

// Remaining properties
@property(retain, nonatomic) TDSchemaCategory *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *parts; // @dynamic parts;
@property _Bool published; // @dynamic published;

@end

