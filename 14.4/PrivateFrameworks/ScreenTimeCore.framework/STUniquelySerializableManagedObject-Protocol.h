//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STSerializableManagedObject-Protocol.h>

@class NSDictionary, NSManagedObjectContext;

@protocol STUniquelySerializableManagedObject <STSerializableManagedObject>
+ (id)fetchOrCreateWithDictionaryRepresentation:(NSDictionary *)arg1 inContext:(NSManagedObjectContext *)arg2 error:(id *)arg3;
@end

