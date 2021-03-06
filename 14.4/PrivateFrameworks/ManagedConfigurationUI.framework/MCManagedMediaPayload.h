//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

__attribute__((visibility("hidden")))
@interface MCManagedMediaPayload : MCPayload
{
    MCBook *_managedBook;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(retain, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;
- (id)title;
- (id)initWithManagedMedia:(id)arg1 profile:(id)arg2;

@end

