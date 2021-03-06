//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CarDictationResult : NSObject
{
    NSString *_text;
    NSArray *_contacts;
}

+ (id)resultWithPersonResults:(id)arg1;
+ (id)resultWithText:(id)arg1;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end

